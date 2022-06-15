/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:48:06 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/01 17:43:37 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

int		ft_strlen(char *str);
int		ft_strlen_x(char *str);
int		ft_strlen_y(char *str);
char	**buff_to_matrix(char *buff, int buff_size, char **matrix);
char	**create_matrix(char *buff);
void search_square(char **bf, int min_side, struct square *sq);

char	*read_map(char *map_name, char *buff)
{
	int		fd;
	ssize_t	nr_bytes;
	int		buff_size;

	buff_size = 1000;
	fd = open(map_name, O_RDONLY);
	if (fd == -1)
		write(1, "ERROR\n", 6);
	// buff = (char *)malloc(1000 * sizeof(char));
	// buff_size = ft_strlen(buff);
	// free(buff);
	// buff = (char *)malloc(buff_size + 1 * sizeof(char));
	nr_bytes = read(fd, buff, buff_size);
	close(fd);
	return (buff);
}

int	main(int ac, char **av)
{
	struct square sq;
	int		i;
	char	map[20];
	char	*buff;
	char	**mat;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != 0)
		{
			map[i] = av[1][i];
			i++;
		}
	}
	else
		return (0);
	buff = (char *)malloc(1000 * sizeof(char));
	buff = read_map(map, buff);
	mat = create_matrix(buff);
	search_square(mat, 5, &sq);
	write(1, "end_x: ", 7);
	c = (char)sq.end_x + '0';
	write(1, &c, 1);
	write(1, "\n", 1);

	write(1, "end_y: ", 7);
	c = (char)sq.end_y + '0';
	write(1, &c, 1);
	write(1, "\n", 1);

	write(1, "size: ", 6);
	c = (char)sq.size + '0';
	write(1, &c, 1);
	write(1, "\n", 1);


	return (0);
}
