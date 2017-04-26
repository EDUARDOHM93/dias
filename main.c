#include <stdio.h>


int main (void) {

	int d;	

	scanf("%d", &d);

	int 	quantidade = (d - (d%365))/365;
		d = d%365 ; 
		printf("%d ano(s)\n",quantidade);

		quantidade = (d - (d%30))/30;
		d= d%30;
		printf("%d mes(es)\n",quantidade);
	
		quantidade = (d - (d%1))/1;
		d= d%1;
		printf("%d dia(s)\n",quantidade);

	

return 0;

}
