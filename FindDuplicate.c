#include<stdio.h>

int main(){
    int a[100],i,j,size;

    printf("Enter Size of the array: ");
    scanf("%d",&size);


    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nDuplicate element in array:");
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
            }
        }
        
        
    }
  return 0;  
}