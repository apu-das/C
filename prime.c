#include<stdio.h>

int main(){
    int num,i,count;
    printf("enter numner: ");
    scanf("%d",&num);
    count=0;
    for(i=1;i<=num;i++){
        if (num%i==0){
            count++;
           }
    }
    if (count==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }

      
    return 0;
}
