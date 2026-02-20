_This project (philosophers) has been created as part of the 42 curriculum by afloris._

# PHILOSOPHERS: a project about multithreading

## Description<br />
Note for self: it's like they're sitting in a circle, philo1 sits next to philoN. <br />

### arguments<br />
Args will be:<br />
av[1] = number of philosophers and forks<br />
av[2] = *time_to_die*  (milliseconds) -> if a philosopher has not started eating within this time since their
last meal or start of the simulation, they die.<br />
av[3] = *time_to_eat* (milliseconds) -> the time it takes a philosopher to eat. While they eat, they hold TWO forks.<br />
av[4] = *time_to_sleep* (milliseconds) -> the time a philosopher spends sleeping.<br />
There is a last, optional argument:<br />
av[5] = *number_of_times_each_philosopher_must_eat* -> if all philosophers have eaten at least as much as n, the simulation stops. 
If this last argument is not included, the simulation stops when the philosopher dies.<br />

## Instructions


## Resources
The first resource I consulted is: https://www.geeksforgeeks.org/c/multithreading-in-c/, to understand what multithreading is.<br />
