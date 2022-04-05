/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:54:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/05 02:32:54 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	exit_error(t_stack *a, t_stack *b)
{
	write (2, "error\n", 6);
	if (a->array)
		free(a->array);
	if (b->array)
		free(b->array);
	exit (1);
}
