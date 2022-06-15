/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:15:29 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/01 17:45:36 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_strlen_x(char *str);
int		ft_strlen_y(char *str);

char	**buff_to_matrix(char *buff, char **matrix)
{
	int	i;
	int	j;
	int	c;
	int buff_size;

	i = 0;
	c = 0;

	buff_size = ft_strlen(buff);

	while (c < buff_size)
	{
		j = 0;
		while (buff[c] != '\n')
		{
			matrix[i][j] = buff[c];
			j++;
			c++;
		}
		matrix[i][j] = '\n';
		c++;
		i++;
	}
	return (matrix);
}

char	**create_matrix(char *buff)
{
	int		size_x;
	int		size_y;
	char	**matrix;
	int		i;
	// sacar la j tambien
	int		j;
	printf("asdf\n");

	size_x = ft_strlen_x(buff);
	size_y = ft_strlen_y(buff);
	printf("size_x:%d size_y:%d\n", size_x, size_y);
	matrix = (char **)malloc(sizeof(char *) * size_y);
	i = 0;
	while (i < size_y)
	{
		matrix[i] = (char *)malloc(sizeof(char) * size_x + 1);
		i++;
	}
	printf("size_x:%d size_y:%d\n", size_x, size_y);
	buff_to_matrix(buff, matrix);
// ESTO VA FUERA
	printf("test2");
	i = 0;
	j = 0;
	while (i < size_y)
	{
		j = 0;
		while (j < size_x)
		{
			printf("%c",matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
// esto va fuera
	return (matrix);
}
