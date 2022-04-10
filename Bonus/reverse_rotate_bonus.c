/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:00:01 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/10 02:48:17 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	rra(t_stack *stack_a)
{
	int	top;
	int	temp;
	int	i;

	top = stack_a->top;
	i = 0;
	if (top >= 1)
	{
		temp = stack_a->array[0];
		while (i++ < top)
			stack_a->array[i - 1] = stack_a->array[i];
		stack_a->array[top] = temp;
	}
}

void	rrb(t_stack *stack_b)
{
	int	top;
	int	temp;
	int	i;

	top = stack_b->top;
	i = 0;
	if (top >= 1)
	{
		temp = stack_b->array[0];
		while (i++ < top)
			stack_b->array[i - 1] = stack_b->array[i];
		stack_b->array[top] = temp;
	}
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	int	top_a;
	int	top_b;
	int	temp;
	int	i;

	top_a = stack_a->top;
	top_b = stack_b->top;
	if (top_a >= 1 && top_b >= 1)
	{
		temp = stack_a->array[0];
		i = 0;
		while (i++ < top_a)
			stack_a->array[i - 1] = stack_a->array[i];
		stack_a->array[top_a] = temp;
		temp = stack_b->array[0];
		i = 0;
		while (i++ < top_b)
			stack_b->array[i - 1] = stack_b->array[i];
		stack_b->array[top_b] = temp;
	}
}
