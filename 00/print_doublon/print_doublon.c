/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:59:40 by kbelov            #+#    #+#             */
/*   Updated: 2019/07/18 16:02:34 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int first = 0;
	int	i = 0;
	int j = 0;

	while (i < na && j < nb)
	{
		if (a[i] == b[j])
		{
			if (++first != 1)
				printf(" ");
			printf("%d", a[i]);
			i++;
			j++;
		}
		else if (a[i] < b[j])
			i++;
		else if (a[i] > b[j])
			j++;
	}
	printf("\n");
}
/*
int		main()
{
	int a[11] = {-5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000};
	int	na = 11;
	int b[8] = {2,  4,  5,  6,  7, 10,  40,  70};
	int nb = 8;

	print_doublon(a, na, b, nb);
}
*/
// Passed 2019.07.18
