int ft_str_is_printable(char *str)
{
	int i;

	if(!str[i])
		return 1;
	while (str[i])
	{
		if(!(str[i] >= '32' && str[i] <= '126'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}
