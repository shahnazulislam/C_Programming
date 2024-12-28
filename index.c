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
//hash triangle print
/*
#include <stdio.h>
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

}
*/
/*
//star triangle print
 #include <stdio.h>
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


/*
//summetion 3 numbers
#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter numbers one: ");
    scanf("%d", &num1);
    printf("Enter numbers two: ");
    scanf("%d",&num2);
    printf("Enter numbers three: ");
    scanf("%d",&num3);
    int sum = threeNum(num1,num2,num3);
    printf("%d\n", sum);
    return 0;
}
int threeNum (int a, int b, int c){
    int result;
    result = a+b+c;
    return result;

}
*/

/*
//how to fined leap year
#include <stdio.h>
 int main()
{
    int year = 4;
    printf("Enter Any Year: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        printf("The year is leap year");
    }else{
        printf("The year is not leap year");
    }
}*/
/*#include <stdio.h>
arrayLength = 9;
int j, scores;
scanf(�%d� &scores[]);
int main()
{
for(j = 0; j < arrayLength; j++)
    {
    printf("%d", scorse[j]);
    }

    }//end for*/

/*#include <stdio.h>
#include <string.h>
int main() {
  char str1[20] = "Hello ";
  char str2[] = "World!";
  strcat(str1, str2);
  printf("%s", str1);
  return 0;
}*/


/*
#include <stdio.h>

int main() {
  char str1[20] = "Hello World!";
  char str2[20];
  strcpy(str2, str1);
  printf("%s", str2);

  return 0;
}*/

/*#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}*/
/*#include <stdio.h>
#include <string.h>

int main()
{
    // defining string
    char str[] = "Hello World";

    // getting length of str using strlen()
    int length = strlen(str);
    printf("Length of string is : %d", length);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the numbers
    int numbers[n];

    // Input: Read values into the array
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output: Display the values in the array
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }

    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int scores[10]; // Array to store 10 scores

    // Input: Read 10 scores
    printf("Enter 10 scores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Output: Display the 10 scores
    printf("The scores are:\n");
    for (int i = 0; i < 10; i++) {
        printf("Score %d: %d\n", i + 1, scores[i]);
    }

    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Output the array
    printf("The elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
*/
/*#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        generateFibonacci(terms);
    }

    return 0;
}*/

/*#include <stdio.h>

int sum(int a, int b)
{
  return a + b;
}
int main()
{
  int add = sum(10, 30);

  printf("Sum is: %d", add);
  return 0;
}*/
/*#include <stdio.h>

//fibonacci series
int main()
{
int num1 = 0, num2 = 1;
printf("Input The number of Fibonacci Series: ");
scanf("%d%d", &num1 &num2);
}*/
/*#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];
    int len1, len2, lenConcat;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    len1 = strlen(str1);
    len2 = strlen(str2);
    strcpy(concat, str1);
    strcat(concat, str2);
    lenConcat = strlen(concat);
    printf("\nLength of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);
    printf("Length of the concatenated string: %d\n", lenConcat);
    printf("Concatenated string: %s\n", concat);

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s%s", &str1, &str2);

    // Concatenate strings
    strcpy(concat, str1);
    strcat(concat, str2);

    printf("Concatenated string: %s\n", concat);
    printf("Length of the concatenated string: %lu\n", strlen(concat));

    return 0;
}*/
//comparison operation using conditional statement and comparisan operator
/*#include <stdio.h>
#include <string.h>
char s1[30], s2[30];
int main(){
    printf("Input First String: ");
    scanf("%s", &s1);
    printf("Input Second String: ");
    scanf("%s", &s2);
    int result_of = strcmp(s1,s2);
    if(result_of == 0){
        printf("Thous are Equal \n");
    }else if(result_of < 0){
        printf("The First String is getter then second \n");
    }else{
        printf("Second string is getter then of first string \n");
    }
return 0;
}*/
//print array values using c code

// C Program to illustrate 2d array
/*#include <stdio.h>

int main()
{

 printf("Two Dimensional Array \n");

 int arr[2][3] = {2,4,6,8,10,12};

 for(int i = 0; i<2; i++){
    for(int j = 0; j<3; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
 }

    return 0;
}*/
/* #include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int result = sum(45,90);
    printf("Sum is: %d", result);
    return result;
} */


/* #include <stdio.h>
char sum(int a, int b){
    return a+b;
}
int main(){
   int result = sum(10,20);
   printf("%d", result);
   return 0;
}
 */




