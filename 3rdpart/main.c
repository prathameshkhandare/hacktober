#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/*Declaration of variables*/
int base;
time_t ct;
int count=0;
int i = 1;
FILE *fp;

/*Opening text file*/
fp=fopen("Part3.txt","w");
/*Finding square of Base with while loop*/

    while(count<20)
    {
/*Taking user input*/
        time(&ct);
        printf("Enter number %d :",i);
        scanf("%d",&base);
        int num = base;
        int result= base*base;
        base = result;
        count++;
        i++;
/*Printing output*/
    fprintf(fp," The current time : %s\tThe count = %d Number :%d's Square Value is : %d \t\n",ctime(&ct),count,num,result);
    }
fclose(fp);

}
