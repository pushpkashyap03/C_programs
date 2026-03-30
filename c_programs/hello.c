//.....WAP to print reverse order of first n natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("enter numbers :");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }

    return 0;
}