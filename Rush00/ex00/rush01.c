/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaida <lgaida@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:25:21 by lgaida            #+#    #+#             */
/*   Updated: 2025/03/29 18:41:42 by lgaida           ###   ########.fr       */
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
			if ((c == 1 && l == 1) || (c == x && l == y))
				ft_putchar('/');
			else if ((c == 1 && l == y) || (c == x && l == 1))
				ft_putchar('\\');
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
