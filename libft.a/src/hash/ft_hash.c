int		ft_hash(const char *str)
{
	int i;
	int hash;

	i = 0;
	hash = 0;
	while (str[i])
	{
		hash = (hash << 5) - hash + str[i];
		i++;
	}

	return (hash);
}