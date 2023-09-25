/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:06:31 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 23:31:16 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSW_H
# define PSW_H
# define SMALL_STACK 5

# include "./../libft/libft.h"

typedef struct s_node
{
	int	value;
	int	index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*node;
	int	size;
}	t_stack;

//Commands
void	do_pa(t_stack **stack_a, t_stack **stack_b);
void	do_pb(t_stack **stack_a, t_stack **stack_b);

void	do_rra(t_stack **stack_a);
void	do_rrb(t_stack **stack_b);
void	do_rrr(t_stack **stack_a, t_stack **stack_b);

void	do_ra(t_stack **stack_a);
void	do_rb(t_stack **stack_b);
void	do_rr(t_stack **stack_a, t_stack **stack_b);

void	do_sa(t_stack **stack_a);
void	do_sb(t_stack **stack_b);
void	do_ss(t_stack **stack_a, t_stack **stack_b);

//Stack_utils
int	add_back(t_stack **stack, t_node *new_node);
void	add_front(t_stack **stack, t_node *new_node);
t_node	*get_last(t_stack **stack);
t_node	*new_node(int value);
int	search_first(t_stack **stack, int max_index, int min_index);
int	search_last(t_stack **stack, int max_index, int min_index);

//Check
int	check_args(int argc, char **argv);
int	check_numbers(char **argv);
int	check_int(char *str);
int	is_sorted(t_stack **stack);

//Init
int	init_stack(t_stack **stack_a, t_stack **stack_b, char **argv);
int	fill_stack(t_stack **stack, char **argv);
void	fill_index(t_stack **stack, int index, int value);

//Sort
void	sort_three(t_stack **stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);

void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort_small(t_stack **stack_a, t_stack **stack_b);
void	sort_big(t_stack **stack_a, t_stack **stack_b);

#endif
