/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:12:57 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/25 16:16:46 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main()
{
	char str[] = "+,;::-$345ADFadf&/\t (";
	char abc[] = "az";
	char ABC[] = "12AZ";
	char num[] = "09";
	char empty[] = "";
	char noprint[] = "\t";

	printf("Result str:    %d\n", ft_str_is_alpha(str));
	printf("Result abc:    %d\n", ft_str_is_alpha(abc));
	printf("Result ABC:    %d\n", ft_str_is_alpha(ABC));
	printf("Result num:    %d\n", ft_str_is_alpha(num));
	printf("Result empty:  %d\n", ft_str_is_alpha(empty));
	printf("Result norprint: %d\n", ft_str_is_alpha(noprint));
	return (0);
}

int	main()
{
	char *s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUIWXYZ";
	char *s2 = "string2";
	char *s3 = "";
	char s4[] = {1, 92, 64, 30, '\0'};
	int ret;

	ret = ft_str_is_alpha(s1);
	printf("%d\n", ret);
	ret = ft_str_is_alpha(s2);
	printf("%d\n", ret);
	ret = ft_str_is_alpha(s3);
	printf("%d\n", ret);
	ret = ft_str_is_alpha(s4);
	printf("%d\n", ret);

	return (0);
}
*/
