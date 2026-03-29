//..............................BASICS......................
//.......WAP TO make a simple calculator........
#include<stdio.h>
int main(){
    int a, b, ch;
    printf("addition : 1\n");
    printf("substraction : 2\n");
    printf("multiply : 3\n");
    printf("division : 4\n");
    printf("remainder : 5 \n");
    printf("enter numbers :\n");
    scanf("%d%d", &a, &b);
    printf("enter choice :\n");
    scanf("%d", &ch);

    int sum,subs,multi,div,rem;
    if(ch==1){
        printf("%d",sum = a+b);
    }
    else if(ch==2){
        printf("%d", subs = a-b);
    }
    else if(ch==3){
        printf("%d", multi= a*b);
    }
    else if(ch==4){
        printf("%d", div= a/b);
    }
    else if(ch==5){
        printf("%d",rem=a%b);
    }
    else
        printf("invalid choice");

    return 0;
}
