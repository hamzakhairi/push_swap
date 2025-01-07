/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:31:09 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/07 14:17:37 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_error()
{
    write(1, "Error\n", 6);
}

void free_node(t_push *list)
{
    t_push *free_node;

    while (list)
    {
        free_node = list;
        list = list->next;
        free(free_node);
    }
}
