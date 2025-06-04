/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:54:39 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 13:00:05 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "      ";
	char	src[] = "Source";
	int	n = 3;
	
	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest after: %s\n", dest);
}
