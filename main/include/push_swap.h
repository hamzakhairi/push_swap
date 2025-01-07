/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:23:29 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/07 14:37:57 by hkhairi          ###   ########.fr       */
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


#endif