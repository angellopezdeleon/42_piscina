/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:03:30 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/13 13:00:47 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abc;

	abc = 97;
	while (abc < 123)
	{
		write(1, &abc, 1);
		abc++;
	}
}

/*int	main(void)
	ft_print_alphabet();
	return (0);
}*/
