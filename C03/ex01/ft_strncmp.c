/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:41:49 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/14 17:27:51 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int main()
{
    printf("%d\n", ft_strncmp("hello", "hello", 5));  // 0
    printf("%d\n", ft_strncmp("hello", "hell", 5));   // 'o' - '\0' = 111
    printf("%d\n", ft_strncmp("abcd", "abcf", 4));    // 'd' - 'f' = -2
    printf("%d\n", ft_strncmp("abc", "abc", 0));      // 0 (no comparison)
    return 0;
}*/
