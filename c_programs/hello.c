//.....WAP to print reverse order of table entered by user 
#include<stdio.h>
int main(){
    int n,m;
    printf("enter number :");
    scanf("%d", &n);

    printf("the reverse order of the table is :\n");
    int i=10;
    while(i>=1){
        m=n*i;
        printf("%d\n",m);
        i--;
    }

    return 0;
}