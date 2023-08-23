#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	if(!dest || !src)
		return (0);
	int i;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char src[] = "salaaam";
	char dest[] = "dalamo";
	printf("%s",ft_strcpy(dest, src));
	return(0);
}
