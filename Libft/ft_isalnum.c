/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:40:27 by aboudoun          #+#    #+#             */
/*   Updated: 2021/11/05 15:47:07 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ft_isalpha(ch) == 1) || (ft_isdigit(ch) == 1))
		return (1);
	return (0);
}
