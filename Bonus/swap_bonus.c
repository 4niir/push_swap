/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:01:10 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/10 02:48:06 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_stack *stack_a)
{
	int	temp;
	int	top;

	top = stack_a->top;
	temp = stack_a->array[top];
	if (top >= 1)
	{
		stack_a->array[top] = stack_a->array[top - 1];
		stack_a->array[top - 1] = temp;
	}
}

void	sb(t_stack *stack_b)
{
	int	temp;
	int	top;

	top = stack_b->top;
	temp = stack_b->array[top];
	if (top >= 1)
	{
		stack_b->array[top] = stack_b->array[top - 1];
		stack_b->array[top - 1] = temp;
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;
	int	top_a;
	int	top_b;

	top_a = stack_a->top;
	top_b = stack_b->top;
	temp = stack_a->array[top_a];
	if (top_a >= 1 && top_b >= 1)
	{
		stack_a->array[top_a] = stack_a->array[top_a - 1];
		stack_a->array[top_a - 1] = temp;
		temp = stack_b->array[top_b];
		stack_b->array[top_b] = stack_b->array[top_b - 1];
		stack_b->array[top_b - 1] = temp;
	}
}
