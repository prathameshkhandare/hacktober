#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/*Declaration of variables*/
    int base;
    int count=0;
    int i = 1;

/*Repeating for 20 times*/

    while(count<20)
    {
/*Taking user input*/
        time_t ct;
        time(&ct);
        printf("Enter number %d :",i);
        scanf("%d",&base);
        int num = base;
        int result=base*base;
        base = result;
        count++;
        i++;
/*Printing output*/
    printf("Current Time : %s",ctime(&ct));
    printf("The count = %d : The number :%d's Square Value = %d\n",count,num,result);
    }
}
