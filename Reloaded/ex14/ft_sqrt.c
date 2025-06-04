/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:16:22 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/06 15:23:56 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int b)
{
	int	i;

	i = 1;
	if (b <= 0)
		return (0);
	while ((i * i) <= b)
	{
		if ((i * i) == b)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(36));
	return (0);
}*/
