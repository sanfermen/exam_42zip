// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdlib.h>

int	nlen(int nbr)
{
	int n = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		n++;
	}
	return (n);
	
}
char *ft_itoa(int nbr)
{
	char *digits = "0123456789";
	int	len = nlen(nbr);
	int	i = 0;
	char *str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		i++;
	}
	if (nbr = 0)
	{
		str[0] = '0';
		i++;
	}
	while (i <= len)
	{
		if (nbr > 0)
			str[i] = digits[nbr % 10];
		else
			str[i] = digits[(nbr % 10) * -1];
		nbr = nbr / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}