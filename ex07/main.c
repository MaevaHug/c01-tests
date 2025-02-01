/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:50:59 by mahug             #+#    #+#             */
/*   Updated: 2025/02/01 05:18:36 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	*create_int_tab(int size, char **values)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = atoi(values[i]);
		i++;
	}
	return (tab);
}

void	print_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	int	*tab;
	int	size;

	if (argc == 1)
	{
		printf("Usage: %s <int1> [<int2> ... <intn>]\n", argv[0]);
		return (0);
	}
	size = argc - 1;
	tab = create_int_tab(size, argv + 1);
	if (tab == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	ft_rev_int_tab(tab, size);
	print_int_tab(tab, size);
	free(tab);
	return (0);
}
