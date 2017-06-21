#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

void main()
{
//a) 
//
//
int k=2000; int p=1000;
double x[p], y[p];
int a[k];
double u[k];
int i, s, l;
a[0] = 102;
printf("give an initial value\n");
//scanf("%d", a[0]);
u[0] = a[0]/2147483648.0;
for(i=0;i<2000;i=i+1)
	{
	a[i+1] = abs((65539*a[i])%2147483648);
	u[i+1] = a[i+1]/2147483648.0;
	//printf("%d, %f, %d\n", a[i], u[i], i);
	}
//FILE * data;
//data = fopen("hamara.txt","w");
//for(j=0;j=2000;j++){
//	fprintf(data, "%d, %f",& a[], u[] );
//	}
//fclose();
//return 0;

//int points()

//FILE * data;
//data = fopen("hamara.tet","r");

//b) 
//......

int j = 0;
for(s=0;s<1000;s=s+1)	
	{
	x[s] = u[2*j];
	y[s] = u[2*j+1];
	j=j+1;
	printf("%f , %f , %d\n", x[s], y[s], s);	
	}
FILE * points;
points = fopen("hamara.txt","w");
for(l=0;l<1000;l=l+1){
	fprintf(points, "%d;  %0.10f;  %0.10f\n",l , x[l], y[l] );
	}
fclose(points);

}





