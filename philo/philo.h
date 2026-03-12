/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:24:30 by babyf             #+#    #+#             */
/*   Updated: 2026/03/12 20:47:17 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <limits.h>
# include <pthread.h>

/* structures */
typedef struct	s_data
{
	int             n_philo; /* av[1]; this might need to not be an int */
	long            time_to_die; /* av[2]*/
	long            time_to_eat; /* av[3] */
	long            time_to_sleep; /* av[4] */
	int             meals_to_eat; /* av[5] */
	int				dead;
	int				ate;
	long			start; /* start time of the simulation */
	struct s_philo  *philo;
	pthread_mutex_t	*forks;
	pthread_mutex_t	*death;
	pthread_mutex_t	*print;
}				t_data;

typedef struct	s_philo
{
	int				id;
	int             meals_eaten;
	long            last_meal;    
	t_data          *data;
	pthread_t       thread;
	pthread_mutex_t *meals;
	pthread_mutex_t *r_fork;
	pthread_mutex_t *l_fork;
}				t_philo;

/* time functions */
long int	time_passed(long int time);
long		get_time(void);

/* basic helper functions  */
void	ft_erromsg(const char *msg);
int		is_valid(char *str);
int		ft_atoi(char *str);
void	print_action(t_philo *philo, const char *action);



#endif