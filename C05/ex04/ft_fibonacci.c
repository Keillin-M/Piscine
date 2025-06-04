/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:31:37 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/14 12:57:17 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
    // Test cases
    printf("0 (Expected 0): %d\n", ft_fibonacci(0));
    printf("1 (Expected 1): %d\n", ft_fibonacci(1));
    printf("2 (Expected 1): %d\n", ft_fibonacci(2));
    printf("3 (Expected 2): %d\n", ft_fibonacci(3));
    printf("5 (Expected 5): %d\n", ft_fibonacci(5));
    printf("10 (Expected 55): %d\n", ft_fibonacci(10));
    printf("-1 (Expected -1): %d\n", ft_fibonacci(-1));
    return 0;
}*/
