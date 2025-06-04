/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:45:34 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/01 09:46:58 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_alpha(char *str);

int main()
{
    // Test with only alphabetic characters
    printf("Test 1: \"%s\" -> %d\n", "Hello", ft_str_is_alpha("Hello")); // Expected output: 1

    // Test with a string containing a number
    printf("Test 2: \"%s\" -> %d\n", "Hello123", ft_str_is_alpha("Hello123")); // Expected output: 0

    // Test with a string containing a special character
    printf("Test 3: \"%s\" -> %d\n", "Hello@World", ft_str_is_alpha("Hello@World")); // Expected output: 0

    // Test with an empty string
    printf("Test 4: \"%s\" -> %d\n", "", ft_str_is_alpha("")); // Expected output: 1 (empty string is considered alphabetic)

    // Test with a string containing only uppercase letters
    printf("Test 5: \"%s\" -> %d\n", "HELLO", ft_str_is_alpha("HELLO")); // Expected output: 1

    // Test with a string containing only lowercase letters
    printf("Test 6: \"%s\" -> %d\n", "hello", ft_str_is_alpha("hello")); // Expected output: 1

    return 0;
}
