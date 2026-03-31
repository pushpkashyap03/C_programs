//.....WAP to print the product of all digits entered by user
#include<stdio.h>
int main(){
    int n,digit,product=1;
    printf("enter number :");
    scanf("%d", &n);

    while(n != 0){
        if(digit==0){
            product=0;
        }
        else    
            digit = n % 10;
            product *= digit;
            n /= 10;
    }
    printf("the product is : %d \n", product);

    return 0;
}