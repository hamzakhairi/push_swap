/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:50:22 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/06 14:02:17 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_push
{
    int number;
    struct s_push* next;
} t_push;

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_atoi(const char *str);


#endif