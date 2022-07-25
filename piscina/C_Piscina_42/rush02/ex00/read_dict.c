/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:22:02 by jlozano-          #+#    #+#             */
/*   Updated: 2022/06/01 17:01:40 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char	*read_dict(const char *custom_dic)
{
	char	*buff;
	int		fd;
	ssize_t	nr_bytes;

	fd = open("numbers.dict", O_RDONLY);
	if (custom_dic[0] != '\0')
	{
		close(fd);
		fd = open(custom_dic, O_RDONLY);
	}
	if (fd == -1)
		write(1, "Dict Error\n", 11);
	buff = (char *)malloc(700 * sizeof(char));
	nr_bytes = read(fd, buff, 699);
	close(fd);
	return (buff);
}
