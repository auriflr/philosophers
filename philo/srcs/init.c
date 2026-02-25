/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:28:04 by babyf             #+#    #+#             */
/*   Updated: 2026/02/25 17:03:44 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/philo.h"

void	ft_erromsg(const char *msg)
{
	printf("Error:\n %s\n", msg);
}

t_philo	*init_philo(void)
{
	t_philo	*philo;

	philo = (t_philo *)malloc(sizeof(t_philo *));
	if (!philo)
		return (NULL);
	return (philo);
}