/* #include <stdio.h>
int main(){
    printf("Hello world");
} */

/* #include <stdio.h>
int main(){
    printf("hello World");
    return 0;
} */

/* #include <stdio.h>
int main(){
    int i = 0;

    while (i<5)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;

} */

/* #include <stdio.h>
int main(){
    int countdown = 3;

    while (countdown < 0)
    {
        printf("%d\n", countdown);
        countdown++;
    }
    printf("happy New Year!!");
    return 0;

} */

/* 2 lab class practic */

/* #include <stdio.h>
int main()
{
    double num1, num2, num3;
    printf("first number:");
    scanf("%lf", &num1);
    printf("Second number:");
    scanf("%lf", &num2);
    printf("third number:");
    scanf("%lf", &num3);

    if(num1 > num2 && num1 > num3){
        printf("First Number is Biggest number", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("Second Number is Biggest number", num2);
    }else if(num3 > num1 && num3 > num2){
        printf("Third Number is Biggest number", num2);
    }else
    {
        printf("both are same in all number");
    }

} */

/* #include <stdio.h>
int main()
{
   for ( int i = 0; i < 10; i++)
   {
    printf("Bangladesh\n");
   }


    return 0;
} */

/* #include <stdio.h>

int main(){

    char n;
    printf("input your name: ");
    scanf("%s", n);
    for (int i = 0; i < 10; i++)
    {
        printf("n");
    }



    return 0;
} */

/* #include <stdio.h>

int main(){
    int i, j, n;
    printf("Please take a valid input: ");
    scanf("%d", &n);
    for ( i = 1; i <= n ; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n", j);

    }
    return 0;

} */

/* #include <stdio.h>

int main(){
    int i, j, n=5;
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n", j);
    }

} */

/* #include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter Numbers of Rows: ");
    scanf("%d", &n);
    for (i = 0; i <= n; ++i)
    {
        for (j = 0; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

/* #include <stdio.h>

int main(){
int i, j, n;
printf("input value of n: ");
scanf("%d" , &n);
for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= i; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    
} 
    return 0;
} */

/* #include <stdio.h>

int main(){
    int i, n, sum = 0;
    printf("Input value: ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        sum = sum+(i*i);
        printf("%d \n", sum);
    }
    return 0;
    
} */

/* #include <stdio.h>
int main(){
    int i, j, n=10;
    for ( i = 1; i <= n  ; i++)
    {
        for( j = 1; j <= i; j++){
            printf("# ");
        }
        printf("\n");
    }
    return 0;
    
} */

/* #include <stdio.h>
int main(){
    int n, i, j;
    printf('Please input your valu: ');
    scanf("%d", &n);
    for ( i = 1; i >= n; i++)
    {
        for ( j = 0; i < j; j++)
        {
            printf("*")
        }
        
    }
    
} */


#include <stdio.h>
int threeNum (int a, int b, int c){
    return a+b+c;
}
int main(){
    int num1, num2, num3;
    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum = threeNum(num1,num2,num3);
    printf("%d\n", sum);
    return 0;
}
