*This project (philosophers) has been created as part of the 42 curriculum by afloris.*

# PHILOSOPHERS: a project about multithreading and concurrent algorithms

## Description <br />
The _dining philosophers problem_ is a programming problem initially formulated by Edsger Dijkstra. This is
the problem: X amount of philosophers sit at a round table with bowls of food. Forks are placed in front of each philosopher.
There are as many forks as philosophers. All day the philosophers take turns eating, sleeping, and thinking. 
A philosopher must have two forks in order to eat, and each fork may only be used by one philosopher at a time. At any time a
philosopher can pick up or set down a fork, but cannot start eating until picking up both forks. The philosophers alternatively eat, sleep, or think.
While they are eating, they are not thinking nor sleeping, while thinking, they are not eating nor sleeping, and, of course, 
while sleeping, they are not eating nor thinking.

Note for self: it's like they're sitting in a circle, philo1 sits next to philoN. <br />
Note for self: pthread_exit is NOT allowed. (perhaps it's not needed) <br />

### arguments <br />
Args will be:<br />
av[1] = number of philosophers and forks<br />
av[2] = **time_to_die**  (milliseconds) -> if a philosopher has not started eating within this time since their
last meal or start of the simulation, they die.<br />
av[3] = **time_to_eat** (milliseconds) -> the time it takes a philosopher to eat. While they eat, they hold TWO forks.<br />
av[4] = **time_to_sleep** (milliseconds) -> the time a philosopher spends sleeping.<br />
There is a last, optional argument:<br />
av[5] = **number_of_times_each_philosopher_must_eat** -> if all philosophers have eaten at least as much as n, the simulation stops. 
If this last argument is not included, the simulation stops when the philosopher dies.<br />

## Instructions


## Resources
- https://www.geeksforgeeks.org/c/multithreading-in-c/; <br />
- https://medium.com/@akshatarhabib/understanding-threads-in-c-c9feb5e9372a; <br />
- https://en.wikipedia.org/wiki/Dining_philosophers_problem; <br />
- https://en.wikipedia.org/wiki/Concurrency_(computer_science);  <br />
- https://medium.com/@ruinadd/philosophers-42-guide-the-dining-philosophers-problem-893a24bc0fe2; <br />
    In the resource right on top of this line, I found some video suggestions: <br />
       * https://www.youtube.com/watch?v=LOfGJcVnvAk; <br />
       * https://www.youtube.com/watch?v=ldJ8WGZVXZk; <br />
       * https://www.youtube.com/watch?v=d9s_d28yJq0&list=PLfqABt5AS4FmuQf70psXrsMLEDQXNkLq2; <br />
