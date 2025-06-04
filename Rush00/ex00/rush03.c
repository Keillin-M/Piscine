/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaida <lgaida@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:44:39 by lgaida            #+#    #+#             */
/*   Updated: 2025/03/29 18:53:30 by lgaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (l <= y)
	{
		while (c <= x)
		{
			if ((l == 1 || l == y) && (c == 1))
				ft_putchar('A');
			else if ((l == 1 || l == y) && (c == x))
				ft_putchar('C');
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
