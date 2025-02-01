/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:50:04 by mahug             #+#    #+#             */
/*   Updated: 2025/02/01 05:18:09 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b);

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 3)
	{
		printf("Usage: %s <number> <number>\n", argv[0]);
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
