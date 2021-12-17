unsigned int ft_strlen(char *str)
{
    int		a;
    
	a = 0;
    while (str[a] != '\0')
    {
        a++;
    }
    return (a);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

        unsigned int i;
        unsigned int j;
        unsigned int dest_len;
		unsigned int result;
        
		
		dest_len = ft_strlen(dest);
        result = ft_strlen(src);
		i = 0;
		j = dest_len;
		if (dstlen >= size)
				return (result += size);
        while ((src[i] != '\0') && (i < size - dest_len - 1))
        {
            dest[j++] = src[i++];
        }
		dest[j] = '\0';
        if (size < dest_len)
			result += size;
        else 
            result += dest_len;
		return(result);
}
