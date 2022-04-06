/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:47:17 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/06 17:13:21 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int find_max(t_stack *b)
{
	int i;
	int position;

	i = 0;
	position = 1;
	while (i <= b->top)
	{
		if (b->array[i] > b->array[position])
			position = i;
		i++;
	}
	return (position);
}

void	sort_b(t_stack *a, t_stack *b)
{
	int max;

	while (b->top >= 0)
	{
		max = find_max(b);
		if (max == b->top || b->top == 0)
			pa(a, b); // check_before_pa(a, b)
		else if (max == b->top - 1)
			sb(b);
		else if (max <= b->top / 2)
			rrb(b);
		else if (max > b->top / 2)
			rb(b);
	}
}

void	algo(t_stack *stack_a, t_stack *stack_b)
{
	int top;//member of the current chunck from the top of the stack
	int bott;//member of the current chunck from the bottom of the stack
	int min;//first number of the chunck
	int max;//last number of chunck
	int chunck;//how many number are int the chunck
	
	if (stack_a->top == 2)
		sorting_3(stack_a);
	//if (stack_a->top < 20)
	chunck = stack_a->top;
	min = 0;
	max = chunck;
	while (stack_a->top >= 0)
	{
		bott = scan_bottom(stack_a, min, max);
		top = scan_top(stack_a, min, max);
		if (bott == -1 || top == -1)//if the chunck is done
		{
			min = min + chunck;
			max = max + chunck;
			bott = scan_bottom(stack_a, min, max);
			top = scan_top(stack_a, min, max);
		}
		ra_rra(stack_a, top, bott);
		check_before_pb(stack_a, stack_b);
	}
	//sorting_3(stack_a);
	//printf("top a: %d\n", stack_a->top);
	sort_b(stack_a, stack_b);
	//printf("top b: %d\n", stack_b->top);
	//check_sort_2(stack_a, stack_b);
	check_sort(stack_a, stack_b);
}
