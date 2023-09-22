/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:58 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 16:22:04 by jimmy            ###   ########.fr       */
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

//check.c
int		check_args(int argc, char **argv);
int		check_num(char **argv);
int		check_int(char *str, int neg);

//error.c
int		error(t_stack *a, t_stack *b);

//init.c
int		init_stack(t_stack **a, char **argv);
t_stack	*create_node(int value);
int		fill_stack(t_stack **a, char **argv);

//push_swap.c
void	free_stack(t_stack **stack);
int		start_algorithm(int ac, char **av, t_stack **a, t_stack **b);

#endif
