/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:23:13 by babyf             #+#    #+#             */
/*   Updated: 2026/03/12 19:07:43 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* momentary file */
#include "philo.h"

int		main(int ac, char **av)
{
	int		i;
	t_data	*data;

	if (ac != 5 && ac != 6) 
		return (ft_errormsg("Error:\n Arguments must be either 5 or 6.\n"), 1);
	while (av[i])
	{
		if (!ft_isnum(av[i]))
			return(ft_errormsg("Error:\n Argument %s must be a number!\n"), 1);
		i++;
	}
	/* check the validity of arguments */
	if (init_all(data->philo, ac, av[i]) == 1)
		return (ft_errormsg("Error:\n Initialization went wrong.\n"), 1);
	/* call whatever function sums up thread creation */
	/* start the simulation */
	/* free */
}