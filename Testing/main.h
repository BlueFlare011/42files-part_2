#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_struct1
{
	int 	num;
	char	letter;
	char	*str;
}t_strut1;

typedef struct s_struct2
{
	int 		num;
	t_strut1	*point;
}t_strut2;

#endif