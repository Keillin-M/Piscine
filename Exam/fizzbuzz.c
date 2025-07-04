/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:42:34 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 12:54:33 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n/10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "fizzbuzz\n", 9);
		else if ((n % 3 == 0) && (n % 5 != 0))
			write(1, "fizz\n", 5 );
		else if ((n % 3 != 0) && (n % 5 == 0))
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(n);
			write(1, "\n", 1);
		}
		n++;
	}
	return (0);
}
