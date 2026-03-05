/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:55:43 by babyf             #+#    #+#             */
/*   Updated: 2026/03/05 15:07:30 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

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
		/* initializes elements of philo*/
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

/* gets time */
long	get_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

/* final function to initialize everything at once */