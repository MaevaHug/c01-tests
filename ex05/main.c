/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:50:37 by mahug             #+#    #+#             */
/*   Updated: 2025/02/01 05:18:26 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		printf("Usage: %s '<string>'\n", argv[0]);
		return (0);
	}
	str = argv[1];
	ft_putstr(str);
	return (0);
}
