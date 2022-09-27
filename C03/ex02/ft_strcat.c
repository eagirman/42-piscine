/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:32:33 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/02 19:21:04 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	a;

	c = 0;
	while (dest[c])
		c++;
	a = 0;
	while (src[a])
	{
		dest[c] = src[a];
		c++;
		a++;
	}
	dest[c] = '\0';
	return (dest);
}
