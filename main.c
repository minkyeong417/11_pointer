#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int i=100;//i=100
	int *p=&i;//p point i
	int **q=&p;//q point q
	
	*p=200;//i=200
	printf("i=%d,*p=%d,**q=%d\n",i,*p,**q);//i=200 *p=i=200 *(*q)=*q=i=200
	
	**q=300;
	printf("i=%d,*p=%d,**q=%d\n",i,*p,**q);
	
	
	return 0;
}
