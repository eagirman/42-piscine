/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:31:36 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/05 21:31:38 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	c;

	if (nb < 2)
		return (2);
	c = 2;
	while (c <= nb / c)
	{
		if (nb % c == 0)
		{
			nb++;
			c = 1;
		}
		c++;
	}
	return (nb);
}
