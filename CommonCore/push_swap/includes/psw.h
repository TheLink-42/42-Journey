/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:06:31 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/14 01:11:22 by jbaeza-c         ###   ########.fr       */
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
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*node;
	int		size;
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
int		add_back(t_stack **stack, t_node *new_node);
void	add_front(t_stack **stack, t_node *new_node);
t_node	*get_last(t_stack **stack);
t_node	*new_node(int value);
int		find_index(t_stack **stack, int index);
void	free_stack(t_stack **stack);

int		get_cheapest(t_stack **stack_a, t_stack **stack_b);
int		get_highest_index(t_stack **stack);
int		get_lowest_index(t_stack **stack);

int		get_cost(t_stack **stack_a, t_stack **stack_b, int index);
int		move_cost_a(t_stack **stack, int index);
int		move_cost_b(t_stack **stack, int index);

//Check
int		check_malloc(t_stack **stack_a, t_stack **stack_b);
int		check_args(char **argv, int pos);
int		check_int(char *str);
int		is_unsorted(t_stack **stack);
int		free_tab(char **tab);

//Init
int		init_stack(t_stack **stack_a, t_stack **stack_b, char **argv, int pos);
int		fill_stack(t_stack **stack, char **argv, int pos);
void	fill_index(t_stack **stack, int index, int value);

//Sort small
void	sort_three(t_stack **stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
//Sorting big
void	optimizing_move(int *a, int *b, t_stack **stack_a, t_stack **stack_b);
void	move_aux(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b);
void	move(t_stack **stack_a, t_stack **stack_b, int index);
void	rmove(t_stack **stack_a, t_stack **stack_b);
void	solve(t_stack **stack_a, t_stack **stack_b);

void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort_small_stack(t_stack **stack_a, t_stack **stack_b);
void	sort_big_stack(t_stack **stack_a, t_stack **stack_b);

#endif
