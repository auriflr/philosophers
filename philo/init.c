/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:55:43 by babyf             #+#    #+#             */
/*   Updated: 2026/03/05 16:12:44 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/* gets time */
long	get_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

/* initialize struct */
static int	init_data(t_data *data)
{
	int	i;

	i = 0;
	data->philos = (t_data *)malloc(sizeof(t_philo) * data->n_philo);
	if (!data->philos)
		return (ft_errormsg("Error:\n Init philos failed.\n"), 1);
	while (i < data->philos)
	{
		data->philos[i].data = i + 1;
		data->philos[i].meals_eaten = 0;
		data->philos[i].last_meal = 0;
		data->philos[i].data = data;
		data->philos[i].l_fork = &data->forks[i];
		data->philos[i].r_fork = &data->forks[(i + 1) % data->n_philo];
		pthread_mutex_init(&data->philos[i].meals, NULL);
		i++;
	}
	return (0);
}

/* initializes mutex */
static int	init_forks(t_data *data)
{
	int	i;

	i = 0;
	data->forks = (t_data *)malloc(sizeof(pthread_mutex_t) * data->n_philo);
	if (!data->forks)
		return (ft_errormsg("Error:\n Init mutex failed.\n"), 1);
	while (i < data->n_philo)
	{
		if (pthread_mutex_init(data->forks, NULL) != 0)
			return (1);
		i++;
	}
	/* REMINDER: this might need more */
	return (0);
}

/* final function to initialize everything at once */