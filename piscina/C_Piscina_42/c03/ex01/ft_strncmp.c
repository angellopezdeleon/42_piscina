/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:33:59 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/26 19:21:52 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	char a[] = "hola";
	char b[] = "hola3434ala";
	unsigned int n1 = 8;

	char c[] = "ha";
	char d[] = "hola";
	unsigned int n2 = 2;

	char e[] = "";
	char f[] = "hola";
	unsigned int n3 = 7;

	char g[] = "hola";
	char h[] = "hola";
	unsigned int n4 = 5;

	char i[] = "hoslas";
	char j[] = "hla";
	unsigned int n5 = 3;

	printf("\nft:      %d\n", ft_strncmp(a, b, n1));
	printf("strncmp: %d\n\n", strncmp(a, b, n1));
	printf("ft:      %d\n", ft_strncmp(c, d, n2));
	printf("strncmp: %d\n\n", strncmp(c, d, n2));
	printf("ft:      %d\n", ft_strncmp(e, f, n3));
	printf("strncmp: %d\n\n", strncmp(e, f, n3));
	printf("ft:      %d\n", ft_strncmp(g, h, n4));
	printf("strncmp: %d\n\n", strncmp(g, h, n4));
	printf("ft:      %d\n", ft_strncmp(i, j, n5));
	printf("strncmp: %d\n\n", strncmp(i, j, n5));
	return (0);
}

