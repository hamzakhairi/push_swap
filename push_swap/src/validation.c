/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:09:03 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/14 10:47:44 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int is_sort(t_push *stack)
{
    if (!stack || !stack->next)
        return 0;
        // print_error();
    
    while (stack->next)
    {
        if (stack->number > stack->next->number)
            return 0;
        stack = stack->next;
    }
    return 1;
    // print_error();
}

int is_valid_integer(const char *str)
{
    if (*str == '-' || *str == '+')
        str++;
    if (*str == '\0')
        return (0);
    while (*str)
    {
        if (*str < '0' && *str > '9')
            return (0);
        str++;
    }
    return (1);
}

int str_cmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int is_duplicate(int place, char *argv[])
{
    int i;

    i = 0;
    while (argv[i])
    {
        if (str_cmp(argv[i], argv[place]) == 0 && i != place)
            return (0);
        i++;
    }
    return (1);
}

int validate_input(int place, char *argv[])
{
    if (!is_valid_integer(argv[place]) || !is_duplicate(place, argv))
        return (0);
    return (1);
}