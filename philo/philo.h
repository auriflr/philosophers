/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:24:30 by babyf             #+#    #+#             */
/*   Updated: 2026/02/25 19:05:00 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>

/* structures */
typedef struct	s_data
{
	int             n_philo; /* av[1]; this might need to not be an int */
	int             time_to_die; /* av[2]*/
	int             time_to_eat; /* av[3] */
	int             time_to_sleep; /* av[4] */
	int             meals_to_eat; /* av[5] */
	int             dead;
	long			time;
	struct s_philo  *philos;
}				t_data;

typedef struct	s_philo
{
	int             meals_eaten;
	long            last_meal;    
	t_data          *data;
	pthread_t       thread;
	pthread_mutex_t *r_fork;
	pthread_mutex_t *l_fork;
}				t_philo;

/* helper functions */
void	ft_erromsg(const char *msg);
int		ft_isdigit(char c);
int		ft_isspace(char c);
int		ft_isnum(char *str);
int		atoi(char *str);

/* parsing */




#endif