/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:40 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/07 04:03:15 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stdio.h>

typedef struct s_stack{
	int	top;
	int	*array;
}	t_stack;

void	exit_error(t_stack *a, t_stack *b);
void	sorting_3(t_stack *a);
void	check_digit(int ac, char **av, t_stack *stack_a, t_stack *stack_b);
void	stack(int ac, char **av, t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	check_sort(t_stack *stack_a, t_stack *stack_b);
void	algo(t_stack *stack_a, t_stack *stack_b);
int		ft_scan(t_stack *a, int min, int max, int not);
void	ra_rra(t_stack *a, int scan);
void	check_before_pb(t_stack *a, t_stack *b);

#endif
