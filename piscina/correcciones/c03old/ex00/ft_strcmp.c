/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:16:24 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/25 17:45:32 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char a[] = "hdfsdfla";
	char b[] = "ho";

	char c[] = "hola";
	char d[] = "hola";

	char e[] = "hola";
	char f[] = "";

	char g[] = "hola";
	char h[] = "234a";

	char i[] = "hola";
	char j[] = "234sdfsdfb";
	
	printf("ft:     %d\n", ft_strcmp(a, b));
	printf("strcmp: %d\n\n", strcmp(a, b));
	printf("ft:     %d\n", ft_strcmp(c, d));
	printf("strcmp: %d\n\n", strcmp(c, d));
	printf("ft:     %d\n", ft_strcmp(e, f));
	printf("strcmp: %d\n\n", strcmp(e, f));
	printf("ft:     %d\n", ft_strcmp(g, h));
	printf("strcmp: %d\n\n", strcmp(g, h));
	printf("ft:     %d\n", ft_strcmp(i, j));
	printf("strcmp: %d\n\n", strcmp(i, j));
	return (0);
}
*/
