/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:02:21 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 15:22:50 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (*str)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n", ft_atoi(a));
}*/
