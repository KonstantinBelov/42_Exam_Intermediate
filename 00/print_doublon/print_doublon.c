/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:36:22 by kbelov            #+#    #+#             */
/*   Updated: 2019/07/15 15:30:18 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int i = 0;
	int j = 0;
	
	while (i < na && j < nb)
	{
		if (a[i] == b[j])
		{
			printf("%d", a[i]);
			i++;
			j++;
			break;
		}
		if (a[i] > b[j])
			j++;
		else if (a[i] < b[j])
			i++;
	}
	while(i < na && j < nb)
	{
		while (a[i] == b[j] && i < na && j < nb)
		{
			printf(" %d", a[i]);
			i++;
			j++;
		}
		if (a[i] > b[j])
			j++;
		else if (a[i] < b[j])
			i++;
	}
	printf("\n");
}
/*
int		main()
{
	int a[3] = {100,  200, 300};
	int	na = 3;
	int b[4] = {1,    2,   3, 4};
   	int nb = 4;
	print_doublon(a, na, b, nb);
}
*/
// Passed 2019.07.15
