/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <mahug@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:49:52 by mahug             #+#    #+#             */
/*   Updated: 2025/01/29 21:49:54 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr);

int	main(int argc, char **argv)
{
	int	nbr;
	int	*pointers[9];
	int	i;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (0);
	}
	nbr = atoi(argv[1]);
	pointers[0] = &nbr;
	i = 1;
	while (i < 9)
	{
		pointers[i] = (int *)&pointers[i - 1];
		i++;
	}
	ft_ultimate_ft((int *********)pointers[8]);
	printf("%d\n", nbr);
	return (0);
}
