/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:32:16 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/09 13:25:03 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

// int start(int argc, char *argv[])
// {
    
// }

int main(int argc, char *argv[])
{
    t_push *a = NULL;
    if (!validate_input(argv, argc))
        return (0);
    if (!init_stack(argc, argv, &a))
        return (0);
    
    sa(&a);
    t_push *curnt = a;
    while (curnt)
    {
        printf("%d -> ", curnt->number);
        curnt = curnt->next;
    }
    free_node(a);
    
    return (0);
}
