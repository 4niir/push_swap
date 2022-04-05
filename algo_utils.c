/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:47:23 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/05 23:08:59 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (i < stack_a->top && stack_a->array[i] > stack_a->array[i + 1])
		i++;
	if (i == stack_a->top)
	{
		write(1, "yes\n", 4);
		if (stack_a->array)
			free(stack_a->array);
		if (stack_b->array)
			free(stack_b->array);
		exit (0);
	}
}

int	scan_bottom(t_stack *a, int min, int max)
{
	int i;

	i = 0;
	while (i <= a->top)
	{
		if (a->array[i] >= min && a->array[i] <= max)
			return (i);
		else
			i++;
	}
	return (-1);
}

int	scan_top(t_stack *a, int min, int max)
{
	int i;
	int j;

	j = 0;
	i = a->top;
	while (i >= 0)
	{
		if (a->array[i] >= min && a->array[i] <= max)
			return (j);
		else
		{
			i--;
			j++;
		}
	}
	return (-1);
}

void	ra_rra(t_stack *a, int top, int bottom)
{
	if (top > bottom)
	{
		while (top >= 0)
		{
			rra(a);
			top--;
		}
	}
	else if (bottom >= top)
	{
		while (bottom >= 0)
		{
			ra(a);
			bottom--;
		}
	}
}

void	check_before_pb(t_stack *a, t_stack *b, int n)
{
	if (n > b->array[b->top] || b->top == -1)
		pb(a, b);
	else if (n < b->array[b->top] && n > b->array[b->top - 1])
	{
		pb(a, b);
		sb(b);
	}
	else
	{
		pb(a, b);
		rb(b);
	}
}