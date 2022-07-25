/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:07:16 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/29 22:09:06 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define ERROR -1

int		ft_atoi(const char *str);
int		parse_args(int ac, char **av, const char *custom_dic);
void	ft_putstr(char *str);
char	*read_dict(const char *custom_dic);
void	positional_value(char *dict, int nb);

int	main(int ac, char **av)
{
	char		*buff;
	int			ato;
	const char	*custom_dic;

	custom_dic = (char *)malloc(13 * sizeof(char));
	if (ac == 3)
		custom_dic = av[1];
	ato = parse_args(ac, av, custom_dic);
	if (ato == ERROR)
	{
		ft_putstr("Error\n");
		return (0);
	}
	buff = read_dict(custom_dic);
	positional_value(buff, ato);
	return (0);
}
