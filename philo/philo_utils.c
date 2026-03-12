/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:29:33 by afloris           #+#    #+#             */
/*   Updated: 2026/03/12 19:06:23 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long int	time_passed(long int time)
{
	long int	now;
	long int	time_passed;

	now = gettime();
	time_passed = now - time;
	return (time_passed);
}

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