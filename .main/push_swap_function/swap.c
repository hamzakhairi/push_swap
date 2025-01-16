/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:05:24 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/09 15:05:53 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sa(t_push **a)
{
    if (!a || !(*a) || !(*a)->next)
        return;
    
    t_push *first = *a;
    t_push *second = (*a)->next;
    
    first->next = second->next;
    second->next = first;

    *a = second;
}




void sb(t_push **b)
{
    if (!b || !(*b) || !(*b)->next)
        return ;
    t_push *first = *b;
    t_push *second = (*b)->next;

    first->next = second->next;
    second->next = first;
    
    *b = second;
}

void ss(t_push *a, t_push *b)
{
    sa(&a);
    sb(&b);
}