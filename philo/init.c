/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:55:43 by babyf             #+#    #+#             */
/*   Updated: 2026/03/05 13:59:30 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/* initialize struct1 */

/* initialize struct2 */

/* initialize mutexes?? 
pthread_mutex_init to initialize*/

/* gets time */
long	get_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

/* final function to initialize everything at once */