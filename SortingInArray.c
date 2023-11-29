#include<stdio.h>

int main(){
    int a[100],i,j,t,size;

    printf("Enter Size of the array: ");
    scanf("%d",&size);


    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }




    for (i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n Array after sorting is: ");
    for(i=0;i<size;i++){
        printf("\n %d ",a[i]);
    }
    return 0;

}