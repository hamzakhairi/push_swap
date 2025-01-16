/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:06:57 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/16 14:19:21 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


int stack_size(t_push *stack)
{
    int size = 0;

    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return size;
}

void	sort_three(t_push **stack_a)
{
    
}

void small_stack_sort(t_push **stack_a, t_push **stack_b)
{
    int size = stack_size(*stack_a);

    if (size == 2)
        if ((*stack_a)->number > (*stack_a)->next->number)
            sa(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size <= 5)
        sort_five(stack_a, stack_b);
}








