/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:46:26 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/01 10:54:54 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_numeric(char *str);

int main()
{
    // Test with a string containing only numeric characters
    printf("Test 1: \"%s\" -> %d\n", "123456", ft_str_is_numeric("123456")); // Expected output: 1

    // Test with a string containing a non-numeric character
    printf("Test 2: \"%s\" -> %d\n", "123a456", ft_str_is_numeric("123a456")); // Expected output: 0

    // Test with an empty string
    printf("Test 3: \"%s\" -> %d\n", "", ft_str_is_numeric("")); // Expected output: 1 (empty string is considered valid)

    // Test with a string containing only one digit
    printf("Test 4: \"%s\" -> %d\n", "7", ft_str_is_numeric("7")); // Expected output: 1

    // Test with a string containing a negative sign
    printf("Test 5: \"%s\" -> %d\n", "-123", ft_str_is_numeric("-123")); // Expected output: 0

    return 0;
}
