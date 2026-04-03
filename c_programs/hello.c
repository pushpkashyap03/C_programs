//.....WAP to print the sum of the nums that the user wants to print
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