//.....WAP to Print numbers from 1 to n, and stop as soon as the num divisible by 20 encountered
#include<stdio.h>
int main(){
    int n;
    printf("enter numbers :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%20 == 0){
            printf("__\n");
            break;
        }
    printf("%d\n", i);
    }
    return 0;
}