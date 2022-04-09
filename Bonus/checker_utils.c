/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:48:10 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/09 16:14:28 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	check_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (i < stack_a->top && stack_a->array[i] > stack_a->array[i + 1])
		i++;
	if (i == stack_a->top && stack_b->top == -1)
	{
		write(1, "OK\n", 3);
		if (stack_a->array)
			free(stack_a->array);
		if (stack_b->array)
			free(stack_b->array);
		exit (0);
	}
	write(1, "KO\n", 3);
	if (stack_a->array)
		free(stack_a->array);
	if (stack_b->array)
		free(stack_b->array);
	exit (1);
}

void	valid_input(t_stack *a, t_stack *b, char *input)
{
	if (!ft_strncmp("sa\n", input, 3))
		sa(a);
	else if (!ft_strncmp("sb\n", input, 3))
		sb(b);
	else if (!ft_strncmp("ss\n", input, 3))
		ss(a, b);
	else if (!ft_strncmp("pa\n", input, 3))
		pa(a, b);
	else if (!ft_strncmp("pb\n", input, 3))
		pb(a, b);
	else if (!ft_strncmp("ra\n", input, 3))
		ra(a);
	else if (!ft_strncmp("rb\n", input, 3))
		rb(b);
	else if (!ft_strncmp("rr\n", input, 3))
		rr(a, b);
	else if (!ft_strncmp("rra\n", input, 4))
		rra(a);
	else if (!ft_strncmp("rrb\n", input, 4))
		rrb(b);
	else if (!ft_strncmp("rrr\n", input, 4))
		rrr(a, b);
	else
		exit_error(a, b);
}

void	ft_instructions(t_stack *a, t_stack *b)
{
	char	*input;

	while (1)
	{
		input = get_next_line(0);
		if (!input)
			return ;
		valid_input(a, b, input);
		free(input);
	}
}
