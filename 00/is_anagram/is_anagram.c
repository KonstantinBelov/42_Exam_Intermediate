/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:59:22 by kbelov            #+#    #+#             */
/*   Updated: 2019/07/17 15:43:44 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_anagram(char *a, char *b)
{
	int	i = -1;	
	int chars[128] = { [0 ... 127] = 0 };
	
	while (*a != '\0')
	{
		chars[*a - 0]++;
		a++;
	}
	while (*b != '\0')
	{
		chars[*b - 0]--;
		b++;
	}
	while (++i < 128)
		if (chars[i] != 0)
			return (0);
	return (1);
}
/*
#include <stdio.h>

int		main(int ac, char *av[])
{
	ac = 0;
	printf("%d\n", is_anagram(av[1], av[2]));
}
*/
// Passed 2019.07.17
