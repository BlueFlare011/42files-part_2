#include "philo.h"

int	argError(char **args)
{
	int	i;
	int	aux;

	i = 1;
	while (args[i] && aux)	// Recorremos todos los argumentos
	{
		aux = ft_atoi(args[i]);	// Comprobamos con atoi y unaa variable auxiliar que todos los argumentos son mayores a 0
		if (aux >= 0)
			aux = 1;
		else
			aux = 0;
		i++;
	}
	return (!aux);	//Retorna 0 si todo esta correcto o 1 si no (la variable aux se invierte)
}
