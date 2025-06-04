/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:19:54 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/07 17:01:28 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
		return (NULL);
	size = (max - min);
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range = ft_range(3,8);
	int	i = 0;
	
	if (range)
	{
		while (i < 5)
		{
			printf("%d", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
	return (0);
}*/
