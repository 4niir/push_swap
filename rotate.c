/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:57:50 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/12 14:27:26 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_stack *stack_a)
{
	int	top;
	int	temp;

	top = stack_a->top;
	if (top >= 1)
	{
		temp = stack_a->array[top];
		while (top--)
			stack_a->array[top + 1] = stack_a->array[top];
		stack_a->array[0] = temp;
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack *stack_b)
{
	int	top;
	int	temp;

	top = stack_b->top;
	if (top >= 1)
	{
		temp = stack_b->array[top];
		while (top--)
			stack_b->array[top + 1] = stack_b->array[top];
		stack_b->array[0] = temp;
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	int	top_a;
	int	top_b;
	int	temp;

	top_a = stack_a->top;
	top_b = stack_b->top;
	if (top_a >= 1 && top_b >= 1)
	{
		temp = stack_b->array[top_b];
		while (top_b--)
			stack_b->array[top_b + 1] = stack_b->array[top_b];
		stack_b->array[0] = temp;
		temp = stack_a->array[top_a];
		while (top_a--)
			stack_a->array[top_a + 1] = stack_a->array[top_a];
		stack_a->array[0] = temp;
		write(1, "rr\n", 3);
	}
}
