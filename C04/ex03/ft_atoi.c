/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:40:41 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/14 10:11:05 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		break ;
	}
	return (result * sign);
}
/*
int main(int argc, char **argv)
{
    int num;

    if (argc == 2)
    {
        num = ft_atoi(argv[1]);

        // Print the number using ft_putnbr (basic version)
        if (num < 0)
        {
            write(1, "-", 1);
            num = -num;
        }
        if (num == 0)
            write(1, "0", 1);
        else
        {
            // store digits in reverse
            char digits[10];
            int i = 0;
            while (num > 0)
            {
                digits[i++] = (num % 10) + '0';
                num /= 10;
            }
            while (--i >= 0)
                write(1, &digits[i], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}*/
