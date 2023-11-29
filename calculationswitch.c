#include<stdio.h>
int main(){
    int a,b,ch;
    printf("\n enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n 1 for add \n 2 for sub \n 3 for mul \n 4 for division \n Enter your choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    printf("\n Addition= %d ",a+b);
    break;

    case 2:
    printf("\n subtraction =%d",a-b);
    break;

    case 3:
    printf("\n Multiplication =%d",a*b);
    break;

    case 4:
    printf("\n Division= %d",a/b);       
    break;
    
    default:
    printf("\n wrong choice. ");
    break;
    }
    return 0;
}