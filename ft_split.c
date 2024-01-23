// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------
// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.
// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.
// Your function must be declared as follows:
// char    **ft_split(char *str);

#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i = 0;
	int k = 0;
	int j;
	char **split = (char **)malloc(sizeof(char *) * 256);

	if (!split)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		j = 0;
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

//  #include <stdio.h>
// int	main()
// {
// 	char **frase = ft_split("hola que tal");
// 	int i = 0;

// 	while (i < 3)
// 	{
// 		printf("string %d: %s\n", i, frase[i]);
// 		i++;
// 	}
// 	return (0);
// }