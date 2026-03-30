//.....WAP to print reverse order of table entered by user 
#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int sum=0,num;
    for(int i=1; i<=n; i++){
        printf("enter numbers %d :", i);
        scanf("%d", &num);
        sum +=num;
    }
    printf("the sum is : %d", sum);

    return 0;
}