#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
{
	int i;
	int j;
	
	if (to_find[0] == '\n')
		return (str);
		i = 0;
	while (str[i+j] ! = to_find [j]
		break;
		j++;
	}
	if (to_find[j] == '\0')
		return (str + i);
		i++
	}
	return 0;
}
