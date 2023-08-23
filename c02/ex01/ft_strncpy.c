char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	if(!dest || !src)
		return (0);
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
