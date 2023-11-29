#include<stdio.h>
int main(){
    int x,y,z,n;
    x=0;
    y=1;
    z=0;
    printf("Enter maximum number: ");
    scanf("%d",&n);
    while (z<=n){
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
    }
}