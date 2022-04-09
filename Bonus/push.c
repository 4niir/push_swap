/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:59:22 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/08 23:46:57 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	top_a;
	int	top_b;

	top_a = stack_a->top;
	top_b = stack_b->top;
	if (top_b >= 0)
	{
		stack_a->array[top_a + 1] = stack_b->array[top_b];
		stack_a->top += 1;
		stack_b->top -= 1;
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	top_a;
	int	top_b;

	top_a = stack_a->top;
	top_b = stack_b->top;
	if (top_a >= 0)
	{
		stack_b->array[top_b + 1] = stack_a->array[top_a];
		stack_b->top += 1;
		stack_a->top -= 1;
		write(1, "pb\n", 3);
	}
}
