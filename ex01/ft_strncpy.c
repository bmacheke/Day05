#nclude <unistd.h>
#include <stdio.h>

char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t i;
	i = 0;
	while (i < n && src[i] ! = '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
