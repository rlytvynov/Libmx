#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *on_exit = (unsigned char*)dst;
	unsigned char *source = (unsigned char*)src;

	for (size_t i = 0; i < n; ++i)
	{
		on_exit[i] = source[i];
	}
	return on_exit;
}

