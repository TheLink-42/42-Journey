/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:58 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 10:59:20 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./../libft/libft.h"

typedef struct s_stack
{
	int				value;
	long			index;
	int				keep_a;
	struct s_stack	*next;
}	t_stack;

//Comands
void	do_pa(t_stack **a, t_stack **b);
void	do_pb(t_stack **a, t_stack **b);

void	do_sa(t_stack **a);
void	do_sb(t_stack **b);
void	do_ss(t_stack **a, t_stack **b);

void	do_ra(t_stack **a);
void	do_rb(t_stack **b);
void	do_rr(t_stack **a, t_stack **b);

void	do_rra(t_stack **a);
void	do_rrb(t_stack **b);
void	do_rrr(t_stack **a, t_stack **b);

#endif
