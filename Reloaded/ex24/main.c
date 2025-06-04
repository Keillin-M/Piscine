/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:44:27 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/09 11:05:01 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int	main(void)
{
	int	a = 'A';
	int	b = 'B';

	ft_putchar(a);
	ft_putstr("Hello, hello!\n");
	ft_swap(&a, &b);
	printf("Swap: a = %c, b = %c", a, b);
	printf("Length: %d\n", ft_strlen("Hello"));
	printf("Compare Hello and hello: %d\n", ft_strcmp("Hello", "hello"));
	return (0);
}
