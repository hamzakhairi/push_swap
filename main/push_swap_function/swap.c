/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:05:24 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/09 13:27:37 by hkhairi          ###   ########.fr       */
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




// void sb()
// {

// }

// void ss()
// {
    
// }