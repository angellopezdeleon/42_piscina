/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:27:04 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/25 17:14:39 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] != 127))
			return (0);
		i++;
	}
	return (1);
}

/*
int main()
{
	char *s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUIWXYZ";
	char *s2 = "string2";
	char *s3 = "";
	char s4[] = {1, 92, 64, 30, '\0'};
	int ret;

	ret = ft_str_is_printable(s1);
	printf("%d\n", ret);
	ret = ft_str_is_printable(s2);
	printf("%d\n", ret);
	ret = ft_str_is_printable(s3);
	printf("%d\n", ret);
	ret = ft_str_is_printable(s4);
	printf("%d\n", ret);

	return (0);
}
*/
