//.....WAP to print the fibonacci user
#include<stdio.h>
int main(){
    int n;
    printf("enter number up to which you want fibonacci series :");
    scanf("%d", &n);
    printf("the fibonacci series is :");

    int next,first=0,second=1;
    for(int i=0; i<n; i++){
        if(i<=1){
            next = i;
        }
        else 
            next = first+second;
            first = second;
            second = next;
        printf("%d", next);
    }
    printf("\n");

    return 0;
}