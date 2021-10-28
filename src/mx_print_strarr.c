#include "../inc/libmx.h"

void mx_print_strarr(char**arr, const char*delim)
{
	if(arr != NULL && delim!=NULL)
	{
		for (int i = 0; arr[i]!=NULL; ++i)
		{
			write(1, arr[i], mx_strlen(arr[i]));
			if (arr[i+1]!=NULL)
			{
				write(1, delim, 1);
			}
		}
		write(1, "\n", 1);
	}

	return;
}

