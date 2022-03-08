/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:54:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/08 18:57:13 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	exit_eroor(t_stack *a, t_stack *b)
{
	write (1, "error\ninvalid argument", 22);
	if (a->array)
		free(a->array);
	if (b->array)
		free(b->array);
	exit (1);
}
