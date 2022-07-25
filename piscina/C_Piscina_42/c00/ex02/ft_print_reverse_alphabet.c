/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:56:11 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/17 18:50:42 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	abc;

	abc = 122;
	while (abc > 96)
	{
		write(1, &abc, 1);
		abc--;
	}
}

/*int main ()
{
	ft_print_reverse_alphabet();
	return(0);
}*/
