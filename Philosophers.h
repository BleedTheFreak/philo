#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_program_args
{
	int n_philo;
	int t_die;
	int t_eat;
	int t_sleep;
	int n_meals;
	// struct timeval t_now;

}t_program_args;

typedef struct s_philosopher
{
	// struct timeval t_start;
	pthread_t threadId;
	int id;
	pthread_mutex_t *fork;
	int n_meals;
	struct s_philosopher *next;
	t_program_args  *args;
}t_philosopher;

#endif