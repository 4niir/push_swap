/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:59:55 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/05 02:59:57 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sorting_3(t_stack *a)
{
	if (a->array[a->top - 2] > a->array[a->top]
		&& a->array[a->top] > a->array[a->top - 1])
		sa(a);
	else if (a->array[a->top] > a->array[a->top - 1]
		&& a->array[a->top - 1] > a->array[a->top - 2])
	{
		sa(a);
		rra(a);
	}
	else if (a->array[a->top] > a->array[a->top - 2]
		&& a->array[a->top - 2] > a->array[a->top - 1])
		ra(a);
	else if (a->array[a->top - 1] > a->array[a->top - 2]
		&& a->array[a->top - 2] > a->array[a->top])
	{
		sa(a);
		ra(a);
	}
	else if (a->array[a->top - 1] > a->array[a->top]
		&& a->array[a->top] > a->array[a->top - 2])
		rra(a);
}
