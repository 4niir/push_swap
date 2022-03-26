/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:54:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/26 19:57:50 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	exit_eroor(t_stack *a, t_stack *b)
{
	write (1, "error\n", 6);
	if (a->array)
		free(a->array);
	if (b->array)
		free(b->array);
	exit (1);
}

void	exit_success(t_stack *a, t_stack *b)
{
	write(1, "sorted\n", 7);
	if (a->array)
		free(a->array);
	if (b->array)
		free(b->array);
	exit (0);
}
