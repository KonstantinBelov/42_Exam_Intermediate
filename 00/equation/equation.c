/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:29:27 by kbelov            #+#    #+#             */
/*   Updated: 2019/07/04 20:25:44 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    equation(int n)
{
	int a = -1;
	int b;
	int c;

	while (++a < 10)
	{
		b = -1;
		while (++b < 10)
		{
			c = -1;
			while (++c < 10)
			{
				if (a * 10 + b + c * 10 + a == n)
					printf("A = %d, B = %d, C = %d\n", a, b, c);
			}
		}
	}
}

/*
#include <stdlib.h>

int		main(int ac, char *av[])
{
	ac = 0;
	equation(atoi(av[1]));
	return(0);
}
*/
