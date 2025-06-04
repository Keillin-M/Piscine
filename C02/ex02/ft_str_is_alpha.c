/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:01:43 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/01 10:36:04 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	lowercase;
	int	uppercase;

	i = 0;
	while (str[i] != '\0')
	{
		lowercase = (str[i] >= 'a' && str[i] <= 'z');
		uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(lowercase || uppercase))
			return (0);
		i++;
	}
	return (1);
}
