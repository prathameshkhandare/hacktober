#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/*Declaration of variables*/
int base;
time_t ct;

/* Taking user input */
printf("Enter a number :");
scanf("%d",&base);

/* Finding square of Base*/
int result=base*base;

/*Getting the Time*/
time(&ct);

/*Printing output */
printf("Current Time %s",ctime(&ct));
printf("The number :%d's Square Value is = %d ",base,result);


}
