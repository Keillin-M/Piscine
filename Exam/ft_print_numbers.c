/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:54:04 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/15 15:01:41 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
//	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	return ft_print_numbers();
}*/
