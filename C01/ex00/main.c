/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:18:35 by eagirman          #+#    #+#             */
/*   Updated: 2021/10/27 14:26:19 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int a;

	a = 5;
	printf("before: %d\n", a);

	ft_ft(&a);
	printf("after : %d\n", a);
}