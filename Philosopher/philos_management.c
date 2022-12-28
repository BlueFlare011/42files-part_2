#include "philo.h"

void	*rutine(void *param)
{
	t_philo	*aux_struct;

	aux_struct = (t_philo *)param;
	printf("%d", aux_struct->id);
	return (NULL);
}
