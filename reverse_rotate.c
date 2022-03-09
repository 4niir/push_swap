/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:00:01 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/09 16:44:10 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_stack *stack_a)
{
	int	top;
	int	temp;
	int	i;

	top = stack_a->top;
	i = 0;
	if (top >= 0)
	{
		temp = stack_a->array[0];
		while (i++ < top)
			stack_a->array[i - 1] = stack_a->array[i];
		stack_a->array[0] = temp;
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack *stack_b)
{
	int	top;
	int	temp;
	int	i;

	top = stack_b->top;
	i = 0;
	if (top >= 0)
	{
		temp = stack_b->array[0];
		while (i++ < top)
			stack_b->array[i - 1] = stack_b->array[i];
		stack_b->array[0] = temp;
		write(1, "rrb\n", 4);
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
	if (top_a >= 0 && top_b >= 0)
	{
		temp = stack_a->array[0];
		i = 0;
		while (i++ < top_a)
			stack_a->array[i - 1] = stack_a->array[i];
		stack_a->array[0] = temp;
		temp = stack_b->array[0];
		i = 0;
		while (i++ < top_b)
			stack_b->array[i - 1] = stack_b->array[i];
		stack_b->array[0] = temp;
		write(1, "rrr\n", 4);
	}
}
