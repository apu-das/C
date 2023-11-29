#include<stdio.h>
int main(){
    int a[100],i,freq=0,key,size;

    printf("Enter Size of the array: ");
    scanf("%d",&size);


    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter element fo find frequency:");
    scanf("%d",&key);
    for (i=0;i<size;i++)
    {
        if (a[i]==key){
            freq++;
        }
    }
    printf("\n frequency of %d is %d:",key,freq);
}