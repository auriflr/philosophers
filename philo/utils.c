/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:22:54 by afloris           #+#    #+#             */
/*   Updated: 2026/02/25 17:51:06 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n' ||
		c == '\r' || c == '\f')	
		return (1);
}

int	atoi(char *str)
{
	int	result;
	
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		return (ft_errormsg("Error:\n input must be positive num.\n"), 1);
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (ft_errormsg("Error:\n input must be a num.\n"), 1);
		result = (result * 10) + (*str - '0');
		str++;
	}
	if (*str > 2147483647) 
		return (ft_errormsg("Error:\n input must be under INT_MAX.\n"), 1);
	if (result == 0)
		return (ft_errormsg("Error:\n input must > 0.\n"), 1);
	return (result);
}