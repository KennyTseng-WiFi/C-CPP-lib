
void print_hex_dump(const char *level, const char *prefix_str, int prefix_type, int rowsize, int groupsize, const void *buf, size_t len, bool ascii);

print_hex_dump(KERN_ALERT, "", DUMP_PREFIX_ADDRESS,
               16, 1, skb->head, skb_headroom(skb), 1);

print_hex_dump(KERN_ALERT, "", DUMP_PREFIX_OFFSET,
               16, 1, skb->data, skb->len, 1);

pr_err("%s-%d cpu[%d]: kenny - caller %pF!\n", __func__, __LINE__, smp_processor_id(), __builtin_return_address(0));