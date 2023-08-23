#include<stdio.h>
#include<string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	i = 0;
	s = 0;
	while (src[s])
	{
		s++;
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);

}
int main()
{
    char src[] = "lamghari";
    char dest[7] = "adkamo";
    char src1[] = "lamghari";
    char dest1[7] = "adampo";

    printf("%u\n%s\n", ft_strlcpy(dest, src, 7), dest);
    printf("%lu\n%s\n", strlcpy(dest1, src1, 7), dest1);

    return 0;
}
