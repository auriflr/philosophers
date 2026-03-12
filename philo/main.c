/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:23:13 by babyf             #+#    #+#             */
/*   Updated: 2026/03/12 20:45:45 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* momentary file */
#include "philo.h"

int		check_valid(char **av)
{
		if (ft_atoi(av[1]) <= 0 || is_valid(ft_atoi(av[1]) == 1))
			return (ft_erromsg("Error:\n Invalid philosopher number.\n"), 1);
		if (ft_atoi(av[2]) <= 0 || is_valid(ft_atoi(av[2])) == 1)
			return (ft_erromsg("Error:\n Invalid time of death.\n"), 1);
		if (ft_atoi(av[3]) <= 0 || is_valid(ft_atoi(av[3])) == 1)
			return (ft_erromsg("Error:\n Invalid time to eat.\n"), 1);
		if (ft_atoi(av[4]) <= 0 || is_valid(ft_atoi(av[4])) == 1)
			return (ft_errormsg("Error:\n Invalid time to sleep.\n"), 1);
		if (av[5])
		{
			if (ft_atoi(av[5]) <= 0 || is_valid(av[5]) == 1)
				return (ft_erromsg("Error:\n Invalid number of meals required.\n"), 1);
		}
}


int		main(int ac, char **av)
{
	int		i;
	t_data	*data;
	
	if (ac != 5 && ac != 6) 
		return (ft_errormsg("Error:\n Arguments must be either 5 or 6.\n"), 1);
	if (check_valid(av) == 1)
		return (1);
	if (init_all(data->philo, ac, av[i]) == 1)
		return (ft_errormsg("Error:\n Initialization went wrong.\n"), 1);
	/* thread creation */
	/* start the simulation */
	/* free */
}