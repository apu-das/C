#include<stdio.h>

int main(){
    int a[100],i,j,k,size;

    printf("Enter Size of the array: ");
    scanf("%d",&size);


    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    

    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(k=j;k<size-1;k++){
                    a[k]=a[k+1];
                }
                size--;
                j--;
                
                
            }
        }
        
        
    }

    printf("\nArray element after deletion:");
    for (i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
  return 0;  
}