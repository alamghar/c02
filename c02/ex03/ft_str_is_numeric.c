int ft_str_is_numeric(char *str)
{
	int i;

	if(!str[i])
		return 1;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		i++;
	}
	return 1;
}
		
