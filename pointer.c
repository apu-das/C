#include<stdio.h>
void main(){

int a[ ]={10,11,-1,56,67,5,4};
int* p,*q;
p=a;
q=&a[0]+3;
printf(" \n 1 %d%d%d", (*p)++,(*p)++,*(++p));
printf(" \n 2  %d", *p);
printf(" \n 3  %d", (*p)++);
printf(" \n 4  %d", (*p)++);
q--;
printf(" \n 5  %d", (*(q+2))--);
printf(" \n 6  %d", *(p+2)-2);
printf(" \n 7  %d", *(p++  -2)-1);


}
