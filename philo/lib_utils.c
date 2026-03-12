/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:22:54 by afloris           #+#    #+#             */
/*   Updated: 2026/03/12 18:32:47 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	ft_erromsg(const char *msg)
{
	printf("Error:\n %s\n", msg);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n' ||
		c == '\r' || c == '\f')	
		return (1);
}

int	ft_isnum(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(str))
			return (1);
		str++;
	}
	return (0);
}

int	atoi(char *str)
{
	long	num;
	int		sign;
	
	sign = 1;
	num = 0;
	while (isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str++ - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && - num  < INT_MIN))
			return (0);
	}
	return ((int *)(num * sign));
}
