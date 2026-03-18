#include<stdio.h>
/*int main(){
    int choice, n, i;
    float num, result;
    
do{
    printf("\n ____ ADVANCED CALCULATOR_________");
    printf("addition : 1 \n");
    printf("substraction : 2 \n");
    printf("multiply : 3 \n");
    printf("divide : 4 \n");
    printf("enter the choice : \n");
    scanf("%d", &choice);

    printf("enter the numbers here : \n");
    scanf("%d", &n);

    printf("enter num 1 : ");
    scanf("%f", &result);

    for(i=2;i<=n; i++){
        printf("enter num here %d :",i);
        scanf("%f", &num);
        switch(choice){
            case 1 : 
            result += num ;
            break;
            case 2 : 
            result -= num;
            break;
            case 3 : 
            result *= num ;
            break;
            case 4 : 
                if (num !=0){
                    result /= num ;
                }
                else{
                    printf("division by zero is not possible");
                
                return 0;
                }
            default :
                printf("invalid choice ! \n");
                return 0;
        }
        printf("result = %.2f \n", result);

    }

}
while(){
printf("thankyou for using \n");
return 0;
}
}
//........................................FOR LOOP........................................//
//...........WAP to print the number from 0 to n..........................//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%d \n", i);
    }
    return 0;
}
//...........WAp to print the reverse order of number..........//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        printf("%d \n", i);
    }
    return 0;
}
//..................WAP to print the all even number taken by user..........//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
        printf("%d \n", i);
        }
        else
        printf("");
    }
    return 0;
}

//.......WAP to print the odd number..........//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d \n", i);
        }
        else
            printf("");
    }
    return 0;
}
//................WAP to print the table of a number taken by user...........//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1;i<=10;i++){
        printf("%d \n", n*i);
    }
    return 0;
}

//......WAP to print the reverse the table of a number..............//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=10; i>=1; i--){
        printf("%d \n", n*i);
    }
    return 0;
}

//.........WAP to print the sum of first n natural number ...................//
int main(){
    int n,i,sum=0;
    printf("enter the number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
            sum +=i;
    }
    printf("%d", sum);
    return 0;
}

//.....WAP to print the sum of even numbers of a given range ..........//
int main(){
    int n,i,sum=0;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
            if(i%2==0){
                sum += i;
            }
            else 
            printf("");
    }
    printf("%d \n", sum);
    return 0;
}

//........WAP to print the factorial ............//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    int fact=1;
    for(i=1; i<=n; i++){
        fact *= i;
    }
    printf("%d", fact);
    return 0;
}

//....WAP to print the sum of digits entered by user........//

int main(){
    int n,i,j,sum=0;
    printf("enter number :");
    scanf("%d", &n);

    for(i=n; i!=0; i/=10){
        j= i % 10;
        sum += j;
        
    }
    printf("%d", sum);
    return 0;
}

//..........WAP to print the product of the digits of a number .........//                                *
int main(){
    int n,i,p;
    printf("enter number :");
    scanf("%d", &n);

    if(n==0){
        p=0;
    }
    else{
        while(n!=0){
            i = n % 10;
            p *= i;
            n /= 10;
        }
    }
    printf("%d", p);
    return 0;
}

//.....WAP to print the fibonacci series of a number..............//                                   *
int main(){
    int n,i,first=0, second=1,next, count=0;
    printf("enter number :");
    scanf("%d", &n);

    printf("fibonacci series :");
    while(count<0){
        if(count<=1){
            next=count;
        }
        else{
        next=first+second;
        first=second;
        second=next;
        }
        printf("%d", next);
        count++;
    }
    return 0;
}

//...........WAP to print the square of a number from 1 to n ...................//
int main(){
    int n,i,sq;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sq = i*i;
        printf("%d\n", sq);
    }
    return 0;
}

int main(){
    int n,i,j;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        j=i*i*i;
        printf("%d \n", j);
    }
    return 0;
}

//........WAP to print the number divisible by 7 starting from 1 to n..................//

int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i%7==0){
            printf("%d \n", i);
        }
        else
            printf("");
    }
    return 0;
}
//.......WAP to print the all factors of a given number...........//

int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(n%i==0){
            printf("%d \n", i);
        }  
    }
    return 0; 
}
//........WAP to print the sum of all digits .................//
int main(){
    int n,i,sum=0;
    printf("enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}


//..............WAP to print the highest common factor of  two number ............//................//doubt.........//
int main(){
    int n,m,rem,hcf;
    printf("enter number :");
    scanf("%d %d", &n ,&m);

    for(m=1; m!=0; n%m){
        n=m;
        m=rem;
    }
    hcf=n;
    printf("%d", hcf);
    return 0;
}

//............WAP to print the smallest number from a given digit..........//
#include<limits.h>
int main(){
    int n,i,temp,smallest;
    printf("enter number :");
    scanf("%d", &n);

    if(n<0){
        n = -n;
    }
    if(n==0){
        smallest = 0;
    }
    else{
        smallest = INT_MAX;
        temp = n;

        while(temp>0){
            int digit=temp % 10;
            
            if(digit<smallest){
                smallest=digit;
            }
            temp /=10;
        }
    }
    printf("the smallest digit is : %d", smallest);
    return 0;
}

//...........wap TO PRINT THE LARGEST DIGITS FORM THE NUMBER ENTERED BY USER............//
int main(){
    int n,rem,largest=0;
    printf("enter number :");
    scanf("%d", &n);

    if(n<0){
        n=-n;
    }
    while(n>0){
            rem=n%10;
            if(rem>largest){
                largest=rem;
            }
            n /=10;
        }
        printf("largest digit : %d ", largest);
        return 0;
}

//......................while loop.........................//
//.................WAP to print the number 1 to n...................//
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}

//.......WAP to print the sum of numbers entered by user............//
int main(){
    int n,i,sum=0;
    printf("enter number :");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("%d", sum);
    return 0;
}

//............WAP to print the product of the nuber entered by user...............//
int main(){
    int n,i,product=1;
    printf("enter number :");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        product *=i;
        i++;
    }
    printf("%d", product);
    return 0;
}

//.........WAP to print the sum of all even number entered by user..........//
int main(){
    int n,i,sum=0;
    printf("enter number :");
    scanf("%d", &n);

    printf("the sum of all even number : \n");
    i=1;
    while(i<=n){
        if(i%2==0){
            sum += i;
        }
        else
            printf("");
        i++;
    }
    printf("%d", sum);
    return 0;
}
//................WAP to print the factorial of a number..................//
int main(){
    int n,i,fact=1;
    printf("enter number :");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        fact *=i;
        i++;
    }
    printf("%d", fact);
    return 0;
}

//.........WAP to print the sum of all digits of a number ...........//

int main(){
    int n,i,sum=0;
    printf("enter number :");
    scanf("%d", &n);

    i=n;
    while(i!=0){
        int rem=i%10;
        sum +=rem;
        i /= 10;
    }
    printf("sum of all digits :%d \n",sum);
    return 0;
}

//............WAP to print the product of all digits of a number.....//
int main(){
    int n,i,product;
    printf("enter number :");
    scanf("%d", &n);

    if(n==0){
        product=0;
    }
    else{
        while(n!=0){
            int rem = n%10;
            product *= rem;
            n /= 10;
        }
    }
    printf("product of all digits :%d \n", product);                                                          *
    return 0;
}


//PROGRAM FOR RIGHT TRIANGLE//
int main(){
    int n,i,j;
    printf("enter the value of n :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    return 0;
}
//PROGRAM FOR INVERSE OF A TRIANGLE//
int main(){
    int n,i,j;
    printf("enter the value of n :");
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
//for square//
int main(){
    int i,j,n;
    printf("enter the value of n :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
// TO PRINT THE PYRAMID STAR// DOUBT....
int main(){
    int i,n,j,m;
    printf("enter the value of n :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j--){
            printf(" ");
            for(m=1;m<=j;m++){
            printf("*");
            }
            printf("\n");
        }
    }
    return 0;

}
//WAP to print the largest num among three nums//
int main(){
    int a,b,c ;
    printf("enter the num1 : \n");
    printf("enter the num2 : \n");
    printf("enter the num3 : \n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b & a>c){
        printf("a is the largest num : %d ",a);
    }
    else if(b>a & b>c){
        printf("b is the largest num  %d:", b);
    }
    else 
        printf("c is the largest num : %d", c);
    
}
int main(){
    int number;
    printf("enter the numbers here : \n");
    scanf("%d", &number);
    printf("the grade of the student is :\n");
        if(number>=90){ 
            printf("A");
        }
        else if(number>=80){
            printf("B");
        }
        else if(number>=70){
            printf("C");
        }
        else if(number>=60){
            printf("D");
        }
        else if(number>=50){
            printf("E");
        }
        else if(number>=40){
            printf("the student have to work better ");
        }
        else
            printf("fail");
    
    return 0;
}
//WAP to print the num from 1 to n//
int main(){
    int n,i;
    printf("enter the number here upto which you want to see the counting below :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d \n", i);
    }
    return 0;
}
// WAP to print the table of a number//
int main(){
    int n,i;
    printf("enetr the number here :");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
    return 0;
}
//WAP to print the inverse table of a number//
int main(){
    int n,i;
    printf("enetr the number here :");
    scanf("%d", &n);
    for(i=10; i>=1; i--){
        printf("%d \n", n*i);
    }
    return 0;
}
//WAP to print the factorial of num given by user//
int main(){
    int fact,i,n;
    printf("enter the number here whose factorial you want to see : \n");
    scanf("%d", &n);

    fact=1;
    for(i=1; i<=n ; i++){
        fact=fact*i;
    }
    printf("%d \n", fact);
    return 0;
}
//WAP to check the prime number//....DOUBT....
int main(){
    int n,i,count=0;
    printf("enter the number here : \n");
    scanf("%d", &n);

    if(n<=1){
        printf("the number is not prime number :");
    return 0;
    }
    for(i=1; i<=n ; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count=2)
        printf("the num is prime");
    else
        printf("not prime");
    return 0;
    
}
//.........WAP to print the palindrome number ........//
int main(){
    int n,i,j;
    printf("enter the number : \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d",i);

    }
    for(j=i; j>=1; j--){
        printf("%d", j);
    }
    return 0;
}

// .............................................FUNCTION AND RECURSION.......................................................//

//.........WAP to print simple hello msg via function calling......//
void printhello();

int main(){
    printhello();
    return 0;
}

void printhello(){
    printf("HELLO HOW ARE YOU ");
}
//......WAP to print the msg through if and else statement .........//

void printnamaste();
void printhi();
void printbon();

int main(){
    printf("indian : 1\n");
    printf("english : 2\n");
    printf("french : 3\n");
    int i;
    printf("enter the i here : \n");
    scanf("%d", &i);

    if(i==1){
        printnamaste();
    }

    else if(i==2){
        printhi();
    }

    else if(i==3){
        printbon();
    }

    else 
        printf("other nationality \n");

    return 0;
}

void printnamaste(){
    printf("namaste aap kaise ho \n ");
}
void printhi(){
    printf("hello how are you \n");
}
void printbon(){
    printf("bonjour _________ \n");
}

//.......WAP to create a simple calculator of two numbers......//

void add(int a, int b);
void subs(int a, int b);
void multi(int a, int b);
void divide(int a, int b);

int main(){
    printf("your simple caculation  starts :\n");
    printf("1 for add\n");
    printf("2 for subs\n");
    printf("3 for multi\n");
    printf("4 for divide\n");

    int a, b, i;
    printf("enter the choice :\n");
    scanf("%d", &i);

    printf("enter two numbers : \n");
    scanf("%d %d ", &a, &b);
    
    switch(i){
        case 1 :
            add(a,b);
            break;
        case 2 : 
            subs(a,b);
            break;
        case 3 :
            multi(a,b);
            break;
        case 4 :
            divide(a,b);
            break;
        default :
            printf("invalid choice !\n");
    }
    return 0;
}

void add(int a, int b){
    printf("added=%d \n", a+b);
}

void subs(int a, int b){
    printf("substracted=%d \n", a-b);
}

void multi(int a, int b){
    printf("multiplied=%d \n", a*b);
}

void divide(int a, int b){
    if(b==0){
        printf("division by zero is not allowed :");
    }
    else
        printf("divided=%d \n", a/b);
}
float sqarea(float s);
float recarea(float a, float b);
float cklarea(float r);

int main(){
    float a,b;
    printf("enter two number :");
    scanf("%d %d", &a, &b);
    printf("the are of square :%f\n",sqarea(a));
    printf("the area of circle is :%f\n",cklarea(b));
    printf("the area of rectangle is :%f\n",recarea(a,b));

    return 0;
}

float sqarea(float s){
    float m;
     m=s*s;
     printf("%f", m);
}
float  recarea(float a, float b){
    float c;
    c=a*b;
    printf("%f", c);
}
float cklarea(float r){
    float d;
    d=3.14*r*r;
    printf("%f", d);
}
 //.........WAP to print the fibonacci series......... //                                      //....DOUBT.....//
int main(){
    int n,i,fib,num1,num2;
    printf("enter n :");
    scanf("%d", &n);
    num1=0,num2=1;

    if(n<=0){
            return 0;
    }
    printf("%d ", num1); 
    if(n==1){
            return 1;
    }
    printf("%d ", num2);

    for(i=2;i<n;i++){
        fib=num1+num2;
        printf("%d ",fib);
        num1=num2;
        num2=fib;
    }
    return 0;
}
// ......WAF to print the fibonacci series.......//                                
int fib(int n);

int main(){
    int num;
    printf("enter num : ");
    scanf("%d", &num);

    printf("%d", fib(num));
    return 0;
}

int fib(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int num1=fib(n-1);
    int num2=fib(n-2);
    int fibn=num1+num2;
    return fibn;

}
//......WAF to print the sqrt of a number....//
void printsqrt(int n);

int main(){
    float x;

    printf("enter a number :");
    scanf("%1f", &x);

    printf("%f",printsqrt(x));

    return 0;
}
void printsqrt(int n){
    float  x,s;
    x=s;
    float root;
    int i;

    for(i=0;i<n;i++){
        float root=0.5*(x+s/x);
        x=root;
    }
    return root;
}
    
// ...........WAF to print the power of a number ............//
int pwr(int n);
int main(){
    int n;
    printf("enter num : \n");
    scanf("%d", &n);
    pwr(n);
    return 0;
}

int pwr(int n){
    printf("%d",n*n);
}
//.........WAF to print the temperature is cold or hot based on the user's choice .........//
void temp(int n);

int main(){
    int t;
    printf("enter temp :");
    scanf("%d", &t);
    temp(t);
    return 0;
}

void temp(int n){
    if(n<=20){
        printf("today temp is cold ");
    }
    if(n>20){
        printf("today the temp is hot");
    }
}
//.........WAF to print the complete fibonecci series based on user's choice ........//   //......DOUBT.......//
int fib(int n);

int main(){
    int n;
    printf("enter number : \n");
    scanf("%d", &n);

    return 0;
}

int fib(int n){
    if(n==0 || n==1){
        if(n==0){
            printf("%d", n);
        }
        if(n==1){
            printf("%d", n);
        }
    }
    int i;
    i=0;
    while(i<=n){
        int num1=fib(i-1);
        int num2=fib(i-2);
        int fibn=num1+num2;
        printf("%d", fibn(i));
        i++;
    }
}
//.........................................................POINTER..........................................................//

//....this is my first program using pointer........//

int main(){
    int x;
    int *ptr;

    ptr= &x;
    *ptr=0;
    printf("x = %d\n",x);
    printf("*ptr = %d\n", *ptr);

    *ptr +=5;
    printf("%d\n", x);
    printf("%d\n", *ptr);

    *ptr *=2;
    printf("%d\n", x);
    printf("%d\n", *ptr);
    return 0;
}

//.............to check the address of age through pointer .........//
int main(){
    int age=10;
    int *ptr=&age;
    int _age=*ptr;
    printf("%p", _age);
    return 0;
}

 //......pointer to pointer .........//
 //............WAP to print the address of age from pointer to pointer ..............//
 int main(){
    int age = 10;
    int *ptr = &age;
    int **pptr = &ptr;
    printf("%p \n", **pptr);
    return 0;
 }

 // ................WAP to print the value of a number using its address........// 
 int main(){
    int n = 50;
    int *ptr = &n;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
 }

 //.......pointer in function call.........//
 //....CALL BY REFERENCE.......//
 void sqr(int n);
 void _sqr(int *n);

 int main(){
    int num = 4;
    printf("the number is : %d\n", num);
    sqr(num);
    _sqr(&num);
    return 0;
 }

 void sqr(int n){
    n=n*n;
    printf("sqaure = %d\n", n);
 }
 void _sqr(int *n){
    *n= (*n)*(*n);
    printf("address = %p \n", *n);
 }
//........WAP to swap the number .........//
 void swap(int n, int m);

 int main(){
    int x=5,y=3;
    swap(x,y);
    printf("after swaping : %d and %d \n", x,y);
    return 0;
 }

 void swap(int n, int m){
    int t=n;
    n=m;
    m=t;
    printf("before swaping : %d and %d \n",n,m);
 }
 //.....................WAF to swap the nuumber............//
 //..............call by reference ............//
 void swap(int n, int m);
 void _swap(int *n, int *m);

 int main(){
    int x,y;
    printf("enter two numbers : \n");
    scanf("%d%d",&x,&y);

    printf("before swaping : %d and %d \n", x,y);
    _swap(&x,&y);
}
void _swap(int *n, int *m){
    int t=*n;
    *n=*m;
    *m=t;
    printf("after swaping : %d and %d \n",*n,*m);
}

//..............WAP to print the sum, avg of the number .......................//
void dowork(int a, int b, int*sum, int*product, int*avg);
int main(){
    int a,b;
    printf("enter number :");
    scanf("%d %d", &a,&b);

    int sum,product,avg;
    dowork(a,b,&sum, &product ,&avg);
    printf("sum= %d \nproduct= %d \navg= %d \n", sum,product,avg);
    return 0;
}
void dowork(int a, int b, int*sum, int*product, int*avg){
    *sum =a+b;
    *avg = *sum/2;
    *product = a*b;
}


//...........................................................ARRAY..........................................................//
//........WAP to print the price of three items with their gst.................//
int main(){
    float price[3];
    printf("enter three prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("price1 with gst : %f \n", price[0]+(0.18*price[0]));
    printf("price2 with gst : %f \n", price[1]+(0.18*price[1]));
    printf("price3 with gst : %f \n", price[2]+(0.18*price[2]));
    return 0;
}

//.......pointer arithmetic............
int main(){
    int age;
    printf("enter age :");
    scanf("%d", &age);

    int *ptr = &age;
    printf("%u \n", ptr);
    ptr++;
    printf("%u", ptr);
    return 0;
}

//.....float
int main(){
    float price=100.00;
    float *ptr=&price;
    printf("%u \n", ptr);
    ptr--;
    printf("%u", ptr);
    return 0;
}
int main(){
    char star= '*';
    char *ptr=&star;
    printf("%u \n", ptr);
    ptr--;
    printf("%u", ptr);
    return 0;
}

//.....ARRAY is a pointer..............
int main(){
    int arr[0];
    int *ptr = arr;     //or...  int *ptr = &arr[0]; 
    printf("%u", ptr);
    return 0;
}

//..traverse an array .................... DOUBT....
int main(){
    int aadhar[5];
    int *ptr = &aadhar[0];
    for (int i=0; i<5; i++){
        printf("%d index : ", i);
        scanf("%d \n", (ptr + i));
    }
    for(int i =0; i<5; i++){
        printf("%d index :%d \n", aadhar[i]);
    }
    return 0;
}
    
//..........to print the array by calling as a reference...
void printnum(int arr[], int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printnum(arr,6);
    return 0;
}
void printnum(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

//..................WAP to print the array elements taken by user...........
int main(){
    int size, i;
    printf("enter number of elements : ");
    scanf("%d", &size);
    int arr[size];

    for(i=0; i<size; i++){
        printf("elements %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("the elements are : \n");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

//......WA program to print the array having only odd elements and count them .............
int main(){
    int n,i,count=0;
    printf("enter number :");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d integers : \n",n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        if(arr[i]%2 !=0){
            count++;
        }
    }
    printf("total number of odd in array : %d \n", count);

    return 0;
}

//.....WA program to reverse an array................
int main(){
    int n,i,d,arr[100],swap;
    printf("enter number :");
    scanf("%d", &n);

    printf("enter %d integers :", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n/2; i++){
        swap = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = swap;
    }
    printf("reversed array :");
    for(i=0; i<n; i++){
        printf("%d \n", arr[i]);
    }

    return 0;
}
   
//.....WA program to store the 1 to n fibonacci number ...............
int main(){
    int n,i;
    printf("enter number :");
    scanf("%d", &n);
    
    if(n<0){
        printf("please enter positive number \n");
        return 1;
    }
    int fib[n];
    if (n>0) fib[0] = 0;
    if (n>1) fib[1] = 1;

    for(i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(i=0; i<n; i++){
        printf("%d", fib[i]);
    }
    printf("\n");

    return 0;

}

//........WA program for a 2D array to store the table of two numbers...............
int main(){
    int table[2][10];
    int num1, num2 ;
    printf("enter num1 :");
    scanf("%d", &num1);

    printf("enter num2 :");
    scanf("%d", &num2);

    for(int i=0; i<2; i++){
        int num = (i==0)? num1: num2;
        for(int j=0; j<10; j++){
            table[i][j] = num*(j+1);
        }
    }
    for(int i=0; i<2; i++){
        int num = (i==0)? num1: num2;
        printf("table of %d \n", num);
        for(int j=0; j<10; j++){
            printf("%d \n", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//............WA program to count a specific number in an array............
int main(){
    int n,i,x,count=0;
    printf("enter number :");
    scanf("%d", &n);
    int arr[n];

    printf("enter %d integers :\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter number which you want to count : \n");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("the number %d occurs %d times : \n", x,count);
}

//.............WA program to print the largest number .........
int main(){
    int n,i,largest;
    printf("enter number :");
    scanf("%d", &n);

    int arr[100];
    printf("enter %d integers :", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    largest=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("the largest number is %d in the array :", largest);


    return 0;
}


//..........WA program to insert an element at the end of an array ........
int main(){
    int arr[50];
    int size, element, i;
    printf("enter number :");
    scanf("%d", &size);

    printf("enter %d integers :",size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element which you want to insert :");
    scanf("%d", &element);
    arr[size]=element;
    size++;
    printf("array after insertion :");

    for(i=0; i<size; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

    return 0;
}

//.................................STRING.................//
//....print a simple message .............
void printname(char arr[]);
int main(){
    char firstn[] = "shradha";
    char lastn[] = "khapra";
    printname(firstn);
    printname(lastn);

    return 0;
}

void printname(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

//........use of function like gets(str), puts(str), fgets(str, n, file)................   
void printstr(char arr[]);

int main(){
    char str[100];
    gets(str);
    puts(str);

    return 0;
}
void printstr(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

//........make a program that inputs user's name and print its length......
#include<stdio.h>
int countlength(char arr[]);
int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("length is : %d \n", countlength(name));

    return 0;
}
int countlength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count ++;
    }
    return count-1;
}*/