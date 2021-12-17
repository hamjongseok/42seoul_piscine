char	*ft_strstr(char *str, char *to_find)
{		
	int		i;
	int		pidx;

	pidx = 0;
	i = 0;
	if (to_find[0] == '\0')
		 return (str);
	while (str[pidx] != '\0')
	{
		if (str[pidx] != to_find[0])
			pidx++;
		i = 0;
		while (str[pidx + i])
		{	
			if (to_find[i] == str[pidx + i])
				i++;
			else
				break ;
			if (to_find[i] == '\0')
				return (&(str[pidx]));
		}
		pidx++;
	}
	return (0);
}
