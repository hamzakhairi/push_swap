/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:23:10 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/07 12:00:19 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_atoi(const char *str)
{
	int	result;
	int					sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

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
    if (!new_node)
    {
        exit(0);
    }
    if (new_node)
    {
        new_node->number = value;
        new_node->next = NULL;
    }
    return new_node;
}

int init_stack(int argc, char *argv[], t_push **a)
{
    int i = 1;
    t_push *new_node;

    if (argc <= 1)
    {
        print_error();
        return (0);
    }
    while (i < argc)
    {
        new_node = create_node(ft_atoi(argv[i]));
        if (!new_node)
        {
            free_node(*a);
            print_error();
            return (0);
        }
        ft_lstadd_back(a, new_node);
        i++;
    }
    return (1);
}
