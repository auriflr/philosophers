/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:55:43 by babyf             #+#    #+#             */
/*   Updated: 2026/03/12 19:07:48 by babyf            ###   ########.fr       */
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
	data->philo = (t_data *)malloc(sizeof(t_philo) * data->n_philo);
	if (!data->philo)
		return (ft_errormsg("Error:\n Init philo failed.\n"), 1);
	while (i < data->philo)
	{
		data->philo[i].data = i + 1;
		data->philo[i].meals_eaten = 0;
		data->philo[i].last_meal = 0;
		data->philo[i].data = data;
		data->philo[i].l_fork = &data->forks[i];
		data->philo[i].r_fork = &data->forks[(i + 1) % data->n_philo];
		pthread_mutex_init(&data->philo[i].meals, NULL);
		i++;
	}
	return (0);
}

/* initializes mutexes 
this might need double checking in case of printing errors
a fix could be a print mutex */
static int	init_mutex(t_data *data)
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
	if (pthread_mutex_init(data->death, NULL) != 0)
		return (1);
	if (pthread_mutex_init(data->print, NULL) != 0)
		return (1);
	return (0);
}

/* final function to initialize everything at once */
int	init_all(t_data *data, int ac, char **av)
{
	memset(data, 0, sizeof(t_data));
	data->n_philo = av[1];
	data->time_to_die = av[2];
	data->time_to_eat = av[3];
	data->time_to_sleep = av[4];
	if (ac == 6)
		data->meals_to_eat = av[5];
	else
		data->meals_to_eat = 0; /* -1 */
	data->dead = 0;
	data->ate = 0;
	if (data->n_philo <= 0 || data->time_to_die <= 0
		|| data->time_to_eat <= 0 || data->time_to_sleep <= 0
		|| (ac == 6 && data->meals_to_eat <= 0))
		return (1);
	data->start = get_time();
	if (init_data(data) != 0)
		return (1);
	if (init_mutex(data) != 0)
		return (1);
	return (0);
}
