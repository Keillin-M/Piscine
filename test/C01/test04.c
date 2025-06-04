/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:28:31 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 13:29:47 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main() 
{
    int a = 42;
    int b = 5;

    // Call the function
    ft_ultimate_div_mod(&a, &b);

    // Prepare and print the results directly with write
    char result[50];
    int len = snprintf(result, sizeof(result), "Div: %d\nMod: %d\n", a, b);
    write(1, result, len);

    return 0;
}

