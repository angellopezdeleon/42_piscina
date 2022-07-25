/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:18:54 by iortego-          #+#    #+#             */
/*   Updated: 2022/05/15 23:31:39 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_print(int cc, int cr, int c, int r)
{
	if ((cc == 1 || cc == c) && (cr > 1 && cr < r))
	{
		ft_putchar('|');
	}
	else if ((cr == 1 || cr == r) && (cc > 1 && cc < c))
	{
		ft_putchar('-');
	}
	else
	{
		if ((cc != 1 && cr != 1) && (cc != c && cr != r))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('o');
		}
	}
}

void	rush00(int c, int r)
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
