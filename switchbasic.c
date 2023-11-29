#include<stdio.h>
int main(){
    int ch;
    printf("\nEnter any number from 1-5: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("\n Saturday");
    break;
    case 2:   
    printf("\n sunday");
    break;
    case-3:
    printf("\n monday");
    break;
    case-4:
    printf("\n tuesday");
    break;
    case-5:
    printf("\n wednesday");
    break;
    case-7:
    printf("\n thursday");
    break;
  
    default:
    printf("\nWrong choice.");
    break;
    }
    return 0;
}