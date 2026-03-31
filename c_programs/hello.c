//.....WAP to check the number is armstrong num or not 
#include<stdio.h>
#include<math.h>
int main(){
    int num,n=0,original,remainder;
    double sum=0.0;

    printf("enter number :");
    scanf("%d", &num);
    original=num;

    int temp=original;
    while(temp !=0 ){
        temp /= 10;
        n++;
    }

    temp = original;
    while( temp != 0){
        remainder = temp % 10;
        sum += pow(remainder,n);
        temp /= 10;
    }
    if((int)sum==original){
        printf("%d is armstrong number ",original);
    }
    else 
        printf("the num is not a armstrong num ");
    return 0;
}