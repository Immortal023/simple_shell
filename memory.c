#include "shell.h"

/**
 * bfree - frees Apointer &  NULLs THEaddress
 * @ptr: addrs OFthe pointa TOfree
 * Return: 1 iFfreed, otherws 0.
 */


int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
