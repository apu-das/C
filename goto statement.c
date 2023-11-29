#include<stdio.h>
#include<math.h>

int main(void) {
    double x,y;
    int count;
    count=1;
    printf("Enter five real values\n");
    read:
        scanf("%1f",&x);
        printf("\n");
        if(x<0)
            printf("Value - %d is negative \n",count);
            else{
                y=sqrt(x);
                printf("%1f\t %n",x,y);
              }
     count=count+1;
     if (count<=5)
        goto read;
     printf("\n End of computation");
   return 0;


 }
