 /*********************************************************************************************************************************\
|																																	|
|	João Henrique Faria		RA170501	01/10/2017 																					|
|																																	|
|	** Scheduler ** 																												|
|																																	|
|	* Tests *																														|
|																																	|
|		10/10 (100%)																												|
|																																	|
 \*********************************************************************************************************************************/

/* library inclusion */
#include <stdio.h>

int main() 
{
	/* variable declaration */
	int a[5];
	int n;
	int flag_nenhuma;

	/* gets the input values */
	scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

	/* prints every iteraction of the scheduler */
	for (int i=0; i<n; i++) 
	{
		/* in case there are no tasks being executed */
		flag_nenhuma = 1;

		/* print the tasks */
		if(!((i+1) % a[0])) {printf("0"); flag_nenhuma = 0;}
		if(!((i+1) % a[1])) {printf("1"); flag_nenhuma = 0;}
		if(!((i+1) % a[2])) {printf("2"); flag_nenhuma = 0;}
		if(!((i+1) % a[3])) {printf("3"); flag_nenhuma = 0;}
		if(!((i+1) % a[4])) {printf("4"); flag_nenhuma = 0;}

		/* in case there are no tasks being executed */
		if(flag_nenhuma) {printf("-");}

		printf("\n");
	}

	return 0;
}
