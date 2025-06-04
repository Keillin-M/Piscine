/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:01:59 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 19:02:19 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
    int num = 0;  // Initialize an integer with value 0

    // Call ft_ft, passing the address of num
    ft_ft(&num);

    // Print the value of num after calling ft_ft
    printf("%d\n", num);

    return 0;
}

