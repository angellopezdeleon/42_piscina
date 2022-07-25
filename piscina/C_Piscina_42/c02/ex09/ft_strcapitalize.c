/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:25:53 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/24 19:11:38 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}

int	low(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}

int	upp(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] && (low(&str[i]) == 0
			&& num(&str[i]) == 0 && upp(&str[i]) == 0))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
		while (str[i] && (low(&str[i]) == 1
				|| num(&str[i]) == 1 || upp(&str[i]) == 1))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
		while (str[i] && (low(&str[i]) == 0
				&& num(&str[i]) == 0 && upp(&str[i]) == 0))
			i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	a[] = "salut, comment tu vas ? 
42mots quarante-deux; cinquante+et+un";
	printf("\n%s\n", a);
	printf("\n%s\n", ft_strcapitalize(a));
	return (0);
}
*/
