/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:50:50 by mahug             #+#    #+#             */
/*   Updated: 2025/02/01 05:18:30 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	len;

	if (argc != 2)
	{
		printf("Usage: %s '<string>'\n", argv[0]);
		return (0);
	}
	len = ft_strlen(argv[1]);
	printf("%d\n", len);
	return (0);
}
