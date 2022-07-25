/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:18:54 by iortego-          #+#    #+#             */
/*   Updated: 2022/05/17 18:19:30 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_print(int cc, int cr, int c, int r)
{
	if ((cc == 1 && cr == 1) || (cc == r && cr == r))
	{
		ft_putchar('A');
	}
	else if ((cc == 1 && cr == r) || (cc == c && cr == 1))
	{
		ft_putchar('C');
	}
	else
	{
		if ((cc != 1 && cr != 1) && (cc != c && cr != r))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void	rush(int c, int r)
{
	int	cc;
	int	cr;

	cr = 1;
	while (cr <= r)
	{
		cc = 1;
		while (cc <= c)
		{
			ft_print(cc, cr, c, r);
			cc++;
		}
		ft_putchar('\n');
	cr++;
	}
}
