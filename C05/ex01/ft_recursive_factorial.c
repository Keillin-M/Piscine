/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:59:58 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/14 12:08:14 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_recursive_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_recursive_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_recursive_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_recursive_factorial(5));
}*/
