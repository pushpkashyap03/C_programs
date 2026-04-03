//.....WAP to print prime number from 1 to n
#include<stdio.h>
int main(){
    int n;
    printf("enter numbers :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%17 == 0){
            printf("__\n");
            continue;
        }
    printf("%d\n", i);
    }
    return 0;
}