/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:07:22 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/09 10:26:17 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
#define FT_ABS_H

static inline int	abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

#endif
