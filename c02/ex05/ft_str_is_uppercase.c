int ft_str_is_uppercase(char *str)
{
	int i;

	if(!str[i])
		return 1;
	while (!(str[i] >= 'A' && str[i] <= 'Z'))
	{
		return 0;
		i++;
	}
	return 1;
}
	
