/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:57:05 by afloris           #+#    #+#             */
/*   Updated: 2026/03/12 20:15:30 by afloris          ###   ########.fr       */
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

/* gets time */
long	get_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}