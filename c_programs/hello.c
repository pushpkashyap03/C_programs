//.....write a program to print the number from 1 to n :..........
#include<stdio.h>
int main(){
    int n;
    printf("enter n :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d\t", i);
    }
    return 0;
}