#include "main.h"

int main(void)
{
	t_strut1	test;
	t_strut2	*mult;

	test.letter = 'P';
	test.num = 24;
	test.str = strdup("Probando 123\n");
	mult = malloc(sizeof(t_strut2) * 5);
	for (int i = 0; i < 5; i++){
		mult[i].num = i + 1;
		mult[i].point = &test;
	}
	for (int i = 0; i < 5; i++){
		if (mult[i].num == 3){
			test.num = 14;
			test.str[1] = 'R';
		}
		printf("%d\n", mult[i].num);
		printf("%c\n", mult[i].point->letter);
		printf("%d\n", mult[i].point->num);
		printf("%s\n", mult[i].point->str);
	}
	free(test.str);
	free(mult);
	return (0);
}