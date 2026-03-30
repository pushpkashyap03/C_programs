//.....WAP to print table of a number entered by user 
#include<stdio.h>
int main(){
    int n,m;
    printf("enter number :");
    scanf("%d", &n);

    printf("the table of %d is :\n", n);
    for(int i=1; i<=10; i++){
        m = n*i;
        printf("%d\n", m);
    }

    return 0;
}