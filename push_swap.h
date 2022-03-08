/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:40 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/08 20:42:18 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct s_stack{
	int	top;
	int	*array;
}	t_stack;

void	exit_eroor(t_stack *a, t_stack *b);
int		check_digit(int ac, char **av);
int		stack(int ac, char **av, t_stack *stack_a, t_stack *stack_b);

#endif
