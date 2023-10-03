/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:06:31 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/01 01:40:37 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSW_H
# define PSW_H
# define SMALL_STACK 5
# define ERROR -1
# define OK 0

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
	int		size;
	int		cost;
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
int	search_first(t_stack **stack, int index);
int	search_last(t_stack **stack, int index);
int	find_index(t_stack **stack, int index);
void	free_stack(t_stack **stack);

int	get_index(t_stack **stack, int max, int min);
int	search_range(t_stack **stack, int max, int min);

//Check
int	check_args(char **argv, int pos);
int	check_int(char *str);
int	is_unsorted(t_stack **stack);

//Init
int	init_stack(t_stack **stack_a, t_stack **stack_b, char **argv, int pos);
int	fill_stack(t_stack **stack, char **argv, int pos);
void	fill_index(t_stack **stack, int index, int value);

//Sort small
void	sort_three(t_stack **stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
//Sorting big
int	get_cost(t_stack **stack, int index);
int     get_cost_b(t_stack **stack, int index);
void	align_stacks(t_stack **stack_a, t_stack **stack_b);
void    align_both(t_stack **stack_a, t_stack **stack_b);
int	cost_to_sort_b(t_stack **stack);
void	sort_range(t_stack **stack_a, t_stack **stack_b, int max, int min);

void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort_small_stack(t_stack **stack_a, t_stack **stack_b);
void	sort_big_stack(t_stack **stack_a, t_stack **stack_b);

#endif
