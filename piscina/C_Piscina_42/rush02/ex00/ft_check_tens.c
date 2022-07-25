/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tens.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:27:07 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/29 21:29:51 by japerez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_check_tens(char *buff, char *ten)
{
	int		i;
	int		j;
	char	v;

	i = 0;
	while (buff[i] != '\0')
	{
		j = 0;
		while (buff[i + j] == ten[j])
		{
			j++;
			if (ten[j] == '\0')
			{
				v = buff[i];
				while (v == ' ' || v == ':' || (v >= '0' && v <= '9'))
					v = buff[i++];
				i--;
				while (buff[i] != '\n')
					write(1, &buff[i++], 1);
				write(1, " ", 1);
				return ;
			}
		}
		i++;
	}
}
