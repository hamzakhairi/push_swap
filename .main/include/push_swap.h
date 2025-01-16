/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:23:29 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/12 15:46:35 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_push
{
    int number;
    struct s_push *next;
} t_push;

// init stack
int init_stack(int argc, char *argv[], t_push **stack);

// handle error and free node 
void print_error();
void free_node(t_push *list);

// validation 
int validate_input(char *argv[], int argc);

// mian funciton 
void ra(t_push **a);
void rb(t_push **b);
void rr(t_push **a, t_push **b);
void sa(t_push **a);
void sb(t_push **b);
void ss(t_push *a, t_push *b);
//



#endif