/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:58:08 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/14 14:17:51 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
int main()
{
    // Test cases
    printf("16 (Expected: 4): %d\n", ft_sqrt(16));
    printf("25 (Expected: 5): %d\n", ft_sqrt(25));
    printf("27 (Expected: 0): %d\n", ft_sqrt(27));
    printf("0 (Expected: 0): %d\n", ft_sqrt(0));
    printf("-1 (Expected: 0): %d\n", ft_sqrt(-1));

    return 0;
}*/
