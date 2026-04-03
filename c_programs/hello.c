//.....WAP to print the product of the nums that user wants
#include<stdio.h>
#include<math.h>
int main(){
    int n, num, product=1;
    printf("how much nums you want to multiply :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("enter number %d :", i);
        scanf("%d", &num);

        if(num!=0){
            product *= num;
        }
        else if(num==0){
            product=0; 
            printf("%d", product);
        }
        else printf("");
    }
    printf("the total product is : %d", product);

    return 0;
}