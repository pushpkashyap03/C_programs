//..............................BASICS......................
//.......WAP TO PRINT the swaping of two numbers........
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d", &a,&b);
    printf("before swaping a and b is : %d and %d \n",a, b);
    int m=a;
    a=b;
    b=m;
    printf("after swaping a and b : %d and %d ",a, b);

    return 0;
}
