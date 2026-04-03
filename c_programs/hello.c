//.....WAP to Print numbers from 1 to n, and stop as soon as the num divisible by 20 encountered
#include<stdio.h>
int main(){
    int n, sum=0,num;
    printf("how much numbers you want to perform :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("enter number %d :", i);
        scanf("%d", &num);
        if(num == 0){
            continue;
        }
        sum += num;
    }
    printf("the sum is : %d", sum);
    return 0;
}