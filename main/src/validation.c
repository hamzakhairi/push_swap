/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:17:40 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/08 18:44:41 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_isdigit(char str)
{
    return (str > '0' && str < '9');
}

int is_valid_integer(const char *str)
{
    if (*str == '-' || *str == '+')
        str++;
    if (*str == '\0')
        return (0);
    while (*str)
    {
        if (!ft_isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

int duplicate_detected(int position, char *argv[])
{
    int i = 1;

    while (argv[i])
    {
        if (i == position)
            i++;
        if (argv[position] == argv[i])
            return (0);
        i++;
    }
    return (1);
}

int has_duplicates(char *argv[], int argc)
{
    int i = 1;
    while (argv[i])
    {
        if (!duplicate_detected(i, argv));
            return (0);
        i++;
    }
    return (0);
}

int validate_input(char *argv[], int argc)
{
    int i = 1;

    while (i <= argc -1)
    {
        if (!is_valid_integer(argv[i]))
        {
            print_error();
            return (0);
        }
        i++;
    }
    return 1;
}

