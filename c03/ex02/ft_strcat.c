char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0')
	{
	}
	while (src[++j] != '\0')
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
