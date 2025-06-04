/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:48:34 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/28 12:06:35 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(void)
{
	char	lowercase;
	char	uppercase;
	int	i;

	lowercase = 'a';
	uppercase = 'B';
	i = 0;
	while (i <= 12)
	{
		write(1, &lowercase, 1);
		write(1, &uppercase, 1);
		lowercase += 2;
		uppercase += 2;
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_alpha();
	return (0);
}
