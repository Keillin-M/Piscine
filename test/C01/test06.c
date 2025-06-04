/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:33:05 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 15:40:56 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str = "Hello World!";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
}
