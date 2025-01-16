/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:45:55 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/16 13:59:40 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



static long	ft_atoi(const char *str)
{
	long	num;
	int		isneg;
	int		i;

	num = 0;
	isneg = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * isneg);
}

t_push	*ft_lstnew(int number)
{
	t_push	*new_node;

	new_node = (t_push *)malloc(sizeof(t_push));
	if (!new_node)
		print_error();
	new_node->number = number;
	new_node->next = NULL;
	return (new_node);
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

void get_index(t_push *stack)
{
    t_push *current;
    t_push *comparison;

    current = stack;
    while (current)
    {
        int index = 1;
        comparison = stack;

        while (comparison)
        {
            if (current->number > comparison->number)
                index++;
            comparison = comparison->next;
        }
        current->index = index;
        current = current->next;
    }
}

void init_stack(t_push **list, char *argv[])
{
    long nbr;
    int i = 0;

    while (argv[i])
    {
        if (!validate_input(i, argv))
            print_error();
        nbr = ft_atoi(argv[i]); 
        if (nbr > INT_MAX || nbr < INT_MIN)
            print_error(); 

        ft_lstadd_back(list, ft_lstnew((int)nbr));
        i++;
    }

    if (*list)
        get_index(*list);
}