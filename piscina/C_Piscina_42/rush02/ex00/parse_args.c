/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:22:49 by jlozano-          #+#    #+#             */
/*   Updated: 2022/05/29 22:38:12 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ERROR -1

int		ft_atoi(const char *str);
char	*read_dict(const char *custom_dic);

int	load_dict(char **av, const char *custom_dic)
{
	int	i;

	i = 0;
	while (av[2][i] != '\0')
	{
		if (av[2][i] >= '0' && av[2][i] <= '9')
			i++;
		else
			return (ERROR);
	}
	custom_dic = av[1];
	return (ft_atoi(av[2]));
}

int	parse_args(int ac, char **av, const char *custom_dic)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= '0' && av[1][i] <= '9')
				i++;
			else
				return (ERROR);
		}
		return (ft_atoi(av[1]));
	}
	else if (ac == 3)
		return (load_dict(av, custom_dic));
	return (ERROR);
}
