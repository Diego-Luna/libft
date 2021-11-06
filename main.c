#include "libft.h"
#include <stdio.h>
#include <string.h>

char	f_strmapi(unsigned i, char c)
{
	return (c + i);
}

int	main(void)
{
	/*char **res;

	res = ft_split("lorem  ipsum    dolor", ' ');
	while (*res)
	{
		printf("%s\n", *res);
		res++;
	}*/

	/*char *i1 = ft_itoa(-623);
	printf("%s\n", i1);*/

	char	*b = "override this !";
	char	b2[0xF0];
	size_t	size = ft_strlen(b);
	size_t	i;

	i = 0;
	while (i < size)
	{
		b2[i] = f_strmapi(i, b[i]);
		i++;
	}
	b2[i] = 0;

	char *ret = ft_strmapi(b, f_strmapi);
	if (strcmp(b2, ret))
			printf("Correct");
	printf("Wrong");
	return (0);
}
