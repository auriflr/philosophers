/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:22:54 by afloris           #+#    #+#             */
/*   Updated: 2026/03/12 20:47:13 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	ft_erromsg(const char *msg)
{
	printf("Error:\n %s\n", msg);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	long	num;
	int		sign;
	
	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n' ||
		*str == '\r' || *str == '\f')	
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

/*might get moved */
void	print_action(t_philo *philo, const char *action)
{
	long long	time; /* timestamp */

	pthread_mutex_lock(&philo->data->print);
	pthread_mutex_lock(&philo->data->death);
	if (!philo->data->dead && !philo->data->ate)
	{
		time = gettime() - philo->data->start;
		printf("%ld philo %d %s\n", time, philo->id, action);
	}
	pthread_mutex_unlock(&philo->data->print);
	pthread_mutex_unlock(&philo->data->death);
}