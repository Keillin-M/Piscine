/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:25:00 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 13:25:58 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int a = 10, b = 3;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    // Print results directly using printf
    printf("Quotient: %d\n", div);
    printf("Remainder: %d\n", mod);

    return 0;
}
