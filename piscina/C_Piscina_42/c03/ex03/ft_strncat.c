/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:44:08 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/26 17:16:54 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}

/*
int main  (void)
{
    char dest[] = "abc";
    const char str[] = "12345";
    unsigned int nb = 3;

	ft_strncat(dest, str, nb);
    //printf("strncat:    %s\n", dest);
    printf("ft_strncat: %s\n", dest);
    return (0);
}
*/
