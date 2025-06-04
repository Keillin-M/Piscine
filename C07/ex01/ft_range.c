/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:45:27 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 16:17:02 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range = ft_range(3, 8);
	int	i;

	i = 0;
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
