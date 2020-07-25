#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define CONSOLE_PRINT(format, args...)                                do{\
	int console_fd;\
	if ((console_fd = open ("/dev/console", O_WRONLY)) == -1) \
	{\
		fprintf(stderr, "Failed to open console.\n");\
		exit (1);\
	}\
	char buf2[256];                         \
	sprintf(buf2, format "\n", ## args);         \
	write(console_fd, buf2, strlen(buf2));  \
	close(console_fd);\
}while(0)

CONSOLE_PRINT("%s-%d: call\n", __func__, __LINE__);

CONSOLE_PRINT("%s-%d: call, pid %d ppid %d\n", __func__, __LINE__, getpid(), getppid());

// test pull request