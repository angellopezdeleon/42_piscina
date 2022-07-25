/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:11:47 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/02 01:42:33 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
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

/*
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

	ret = ft_range(3, 3);
	if (ret)
		printf("User didn't return NULL\n");

	ret = ft_range(3, 0);
	if (ret)
		printf("User didn't return NULL\n");

	ret = ft_range(0, 3);
	print_arr(ret, 3);
	free(ret);

	ret = ft_range(-10, -5);
	print_arr(ret, 5);
	free(ret);

	ret = ft_range(-2147483648, -2147483646);
	print_arr(ret, 2);
	free(ret);

	ret = ft_range(2147483645, 2147483647);
	print_arr(ret, 2);
	free(ret);

	ret = ft_range(-2, 3);
	print_arr(ret, 5);
	free(ret);
}
*/
