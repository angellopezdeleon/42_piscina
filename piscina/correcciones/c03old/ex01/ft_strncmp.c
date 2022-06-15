/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:33:59 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/22 20:57:45 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	char	*ss1;
	char	*ss2;

	i = 0;
	while (s1[i] != s1[n])
	{
		ss1[i] = s1[i];
		i++;
	}
	while (s2[i] != s2[n])
	{
		ss2[i] = s2[i];
		i++;
	}	
	while ((ss1[i] != '\0' || ss2[i] != '\0'))
		i++;

	return (ss1[i] - ss2[i]);
}

int	main(void)
{
	char a[] = "hola";
	char b[] = "ho";
	unsigned int n1 = 2;

	char c[] = "hola";
	char d[] = "hola";
	unsigned int n2 = 2;

	char e[] = "hola";
	char f[] = "";
	unsigned int n3 = 2;

	char g[] = "hola";
	char h[] = "234a";
	unsigned int n4 = 2;

	char i[] = "hola";
	char j[] = "234b";
	unsigned int n5 = 2;

	printf("ft:     %d\n", ft_strncmp(a, b, n1));
	printf("strncmp: %d\n\n", strncmp(a, b, n1));
	printf("ft:     %d\n", ft_strncmp(c, d, n2));
	printf("strncmp: %d\n\n", strncmp(c, d, n2));
	printf("ft:     %d\n", ft_strncmp(e, f, n3));
	printf("strncmp: %d\n\n", strncmp(e, f, n3));
	printf("ft:     %d\n", ft_strncmp(g, h, n4));
	printf("strncmp: %d\n\n", strncmp(g, h, n4));
	printf("ft:     %d\n", ft_strncmp(i, j, n5));
	printf("strncmp: %d\n\n", strncmp(i, j, n5));
	return (0);
}
