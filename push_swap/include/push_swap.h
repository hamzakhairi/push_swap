/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:51:08 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/17 18:03:28 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>


typedef struct s_push
{
    int number;
    int index;
    struct s_push *next;
} t_push;

typedef struct s_get
{
    int value;
    int index;
} t_get;

// init stack 
void init_stack(t_push **list, char *argv[]);

//validation
int validate_input(int place, char *argv[]);
int is_sort(t_push *stack);

// error 
void print_error();
void free_node(t_push *list);

// function push swap
void sa(t_push **stack_a);
void sb(t_push **stack_b);
void ss(t_push **stack_a, t_push **stack_b);
void pa(t_push **stack_a, t_push **stack_b);
void pb(t_push **stack_a, t_push **stack_b);
void ra(t_push **stack_a);
void rb(t_push **stack_b);
void rr(t_push **stack_a, t_push **stack_b);
void rra(t_push **stack_a);
void rrb(t_push **stack_b);
void rrr(t_push **stack_a, t_push **stack_b);

#endif