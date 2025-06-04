/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:54:56 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/29 15:09:59 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int width, char left, char middle, char right)
{
	int	j;

	j = 0;
	ft_putchar(left);
	while (j < width - 2)
	{
		ft_putchar(middle);
		j++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	else
		while (i < y)
		{
			if (i == 0)
				line(x, 'A', 'B', 'A');
			else
			{
				if (i == y - 1)
					line(x, 'C', 'B', 'C');
				else
					line(x, 'B', ' ', 'B');
			}
			i++;
		}
}
