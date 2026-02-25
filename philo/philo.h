/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:24:30 by babyf             #+#    #+#             */
/*   Updated: 2026/02/25 17:23:09 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <pthread.h>

/* structures */
/* all these structs are MOMENTARY */
typedef struct	s_philo
{
	int				id; /* thread id */
	int				meals;
	long long		last_meal;
	pthread_t		thread;
	pthread_mutex_t	*right_fork;
	pthread_mutex_t	*left_fork;
	struct s_data	*data;
}				t_philo;

typedef struct	s_data
{
	
}				t_data;
/* parsing */

/* eat */

/* think */

/* go to sleep */



#endif