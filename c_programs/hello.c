//.....WAP to check the number is armstrong num or not 
#include<stdio.h>
#include<math.h>
int main(){
    int n,num,sum=0;
    printf("how much number you want to add ?\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("enter number %d :", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("the total sum is : %d", sum);

    return 0;
}