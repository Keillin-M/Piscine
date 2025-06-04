/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:22:24 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/14 12:26:35 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_recursive_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_recursive_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
}*/
