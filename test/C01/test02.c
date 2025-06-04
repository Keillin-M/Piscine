/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:22:03 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 13:23:07 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;

	a = 24;
	b = 42;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	ft_swap(&a, &b);
	printf("%s\n", "Result");
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	return (0);
}
