/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:50:15 by mahug             #+#    #+#             */
/*   Updated: 2025/02/01 05:18:17 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	if (argc != 3)
	{
		printf("Usage: %s <a> <b>\n", argv[0]);
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n", a, b, div);
	printf("%d %% %d = %d\n", a, b, mod);
	return (0);
}
