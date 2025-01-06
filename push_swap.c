/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:50:28 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/06 14:06:14 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_lstadd_back(t_push **lst, t_push *new)
{
	t_push	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		current = *lst;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
}

t_push* create_node(int value)
{
    t_push* new_node = (t_push*)malloc(sizeof(t_push));
    if (new_node)
    {
        new_node->number = value;
        new_node->next = NULL;
    }
    return new_node;
}


int main(int argc, char *argv[])
{
    t_push  *head;
    int i = 1;
    while (i < argc)
    {
        // printf("%s\n",argv[i]);
        ft_lstadd_back(&head, create_node(ft_atoi(argv[i])));
        i++;
    }

    t_push* current = head;
    while (current)
    {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");

    current = head;
    while (current)
    {
        t_push* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
