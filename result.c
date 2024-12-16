#include<stdio.h>
int main(){
    int n;
    printf("inter an integer number\n:");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("This is an Event number");
    }else{
        printf("This is an Odd number");
    }
}