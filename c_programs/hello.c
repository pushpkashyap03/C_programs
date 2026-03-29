//..............................BASICS......................
//.......WAP TO PRINT the even and odd numbers........
#include<stdio.h>
int main(){
    int a;
    printf("enter number :");
    scanf("%d", &a);

    if(a%2==0){
        printf("even");
    }    
    else if(a%2!=0){
        printf("odd");
    }
    else
        printf("invalid input");

    return 0;
}
