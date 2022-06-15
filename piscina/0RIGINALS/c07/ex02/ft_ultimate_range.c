/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:42:56 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/02 02:07:14 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*list;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	list = (int *)malloc(size);
	i = 0;
	while (i < size)
	{
		list[i] = min;
		min++;
		i++;
	}
	return (list);	
}

void	print_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		++i;
	}
	printf("\n");
}

int	main(void)
{
	int *ret;
	int s;

	s = ft_ultimate_range(&ret, 3, 3);
	if (ret)
		printf("User didn't return NULL\n");
	if (s)
		printf("User didn't return size -> 0\n");

	s = ft_ultimate_range(&ret, 0, 3);
	print_arr(ret, s);
	free(ret);

	s = ft_ultimate_range(&ret, -10, -5);
	print_arr(ret, s);
	free(ret);

	s = ft_ultimate_range(&ret, -2147483648, -2147483646);
	print_arr(ret, s);
	free(ret);

	s = ft_ultimate_range(&ret, 2147483645, 2147483647);
	print_arr(ret, s);
	free(ret);

	s = ft_ultimate_range(&ret, -2, 3);
	print_arr(ret, s);
	free(ret);
}
