/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:17:40 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/07 14:56:41 by hkhairi          ###   ########.fr       */
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

// int dup_dit(int position, )
// {
    
// }

int has_duplicates(char *argv[], int argc)
{
    int i = 0;
    while ()
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

