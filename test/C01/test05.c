/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:25:07 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 15:27:07 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
 
int	main(void)
{
	char	*str = "Print the string";
	
	ft_putstr(str);
	return (0);
}
