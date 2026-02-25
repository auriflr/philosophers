/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:22:54 by afloris           #+#    #+#             */
/*   Updated: 2026/02/25 19:14:30 by afloris          ###   ########.fr       */
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
	unsigned long	num;
	int				sign;
	int				i;
	
	i = 0;
	sign = 1;
	num = 0;
	while (isspace(str[i]))
		i++;
	/* might need to change this to handle negative numbers */
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}