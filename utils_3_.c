/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3_.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:25:43 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/06 10:34:36 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

// void	ft_putchar_fd(char c, int fd)
// {
// 	if (fd != -1)
// 		write(fd, &c, 1);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	i;

// 	if (!s || fd == -1)
// 		return ;
// 	i = 0;
// 	while (s[i])
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// }