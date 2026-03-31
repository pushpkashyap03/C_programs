//.....WAP to check the number is palindrome or not 
#include<stdio.h>
int main(){
    int n,remainder,original,reversed=0;
    printf("enter number :");
    scanf("%d", &n);

    original=n;
    while (n!=0) {
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n /=10;
    }
    if(original==reversed){
        printf("%d is a palindrome number :)", original);
    }
    else{
        printf("%d is not a palindrome number :(", original);
    }
    return 0;
}