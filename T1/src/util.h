#ifndef __UTIL_H__
#define __UTIL_H__

int hex_to_bin(char ch);
int hex2bin(uint8_t *dst, const char *src, size_t count);
char *bin2hex(char *dst, const void *src, size_t count);

#endif /* __UTIL_H__ */
