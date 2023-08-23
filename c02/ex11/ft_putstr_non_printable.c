#include<unistd.h>
void	prrint_hexa(char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}
void	ft_putstr_non_printable(char *str)
{
	int	i;
 
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\",1);
			prrint_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
