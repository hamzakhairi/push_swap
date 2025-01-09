/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:39:28 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/09 12:44:41 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ra(t_push **a)
{
    if (!a || !(*a) || !((*a)->next))
        return;

    t_push *first = *a;
    t_push *temp = *a;

    while (temp->next)
        temp = temp->next;

    *a = first->next;
    first->next = NULL;
    temp->next = first;
}

void rb(t_push **b)
{
    if (!b || !(*b) || !((*b)->next))
        return;

    t_push *first = *b;
    t_push *temp = *b;

    while (temp->next)
        temp = temp->next;

    *b = first->next;
    first->next = NULL;
    temp->next = first;
}


void rr(t_push **a, t_push **b)
{
    ra(a);
    rb(b);
}


