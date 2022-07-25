/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:43:09 by jlozano-          #+#    #+#             */
/*   Updated: 2022/05/31 16:43:11 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

void search_square(char bf[7][7], int min_side, struct square *sq)
{
	int r;
	int c;
	int r_init;
	int c_init;
	int act_side;
	int ret;

	r = 0;
	c = 0;
	r_init = 0;
	c_init = 0;
	act_side = 0;
	act_side = min_side;
	sq -> end_x = 0;
	sq -> end_y = 0;
	sq -> size = 0;
	while (act_side > 0)
	{
	    r_init = 0;
		while (r_init <= (min_side - act_side))
		{
			//r = r_init;
			c_init = 0;
			while (c_init <= (min_side - act_side))
			{
				ret = 1;
				r = r_init;
				while (r < (act_side + r_init) && ret)
				{
				    c = c_init;
					while (c < (act_side + c_init) && ret)
					{
						if (bf[r][c] != '.')
							ret = 0 ;
    					if (((r - r_init) == act_side-1) && ((c - c_init) == act_side-1))
    					{
    						sq -> end_x = c;
    						sq -> end_y = r;
    						sq -> size = act_side;
    						return ;
    					}
						c++;
					}
				    r++;
				}
				c_init++;
			}
			r_init++;
		}
		act_side--;
	}
}