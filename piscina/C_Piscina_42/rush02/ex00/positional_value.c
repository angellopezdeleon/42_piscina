/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positional_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:33:09 by jlozano-          #+#    #+#             */
/*   Updated: 2022/05/29 13:33:11 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void	ft_check_tens(char *str, char *to_find);
int		ft_atoi(const char *str);

char	*ft_itoa(int nb)
{
	char	buff[38];
	char	*ret;
	int		n;
	int		i;

	ret = (char *)malloc(38 * sizeof(char));
	n = 0;
	while (nb != 0)
	{
		buff[n] = (nb % 10) + '0';
		nb = nb / 10;
		n++;
	}
	i = 0;
	while (n >= 0)
	{
		n--;
		ret[i] = buff[n];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

void	put_alpha_number(char *dict, int n, int posVal)
{
	int		mult;
	int		i;
	char	*arr_mult;
	char	*char_n;

	char_n = (char *)malloc(3 * sizeof(char));
	mult = 1;
	i = 0;
	while (i++ < posVal)
	{
		mult *= 10;
	}
	if (posVal == 1)
	{
		n *= mult;
		char_n = ft_itoa(n);
	}
	else
		char_n = ft_itoa(n);
	ft_check_tens(dict, char_n);
	if (mult >= 100)
	{
		arr_mult = ft_itoa(mult);
		ft_check_tens(dict, arr_mult);
	}
}

void	positional_value(char *dict, int nb)
{
	int		buff[38];
	char	*aux;
	int		n;
	int		int_buff;

	aux = (char *)malloc(2 * sizeof(char));
	n = 0;
	while (nb != 0)
	{
		buff[n++] = (nb % 10);
		nb = nb / 10;
	}
	while (n-- > 0)
	{
		if (buff[n] == 1 && (n % 3 == 1))
		{
			aux[0] = buff[n] + '0';
			aux[1] = buff[n - 1] + '0';
			int_buff = ft_atoi(aux);
			put_alpha_number(dict, int_buff, n-- - 1);
		}
		else
			put_alpha_number(dict, buff[n], n);
	}
	write(1, "\n", 1);
}
