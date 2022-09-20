#include<stdio.h>
int main () {
    int x,sum=1;
    printf("enter your number : ");
    scanf("%d",&x);
    for(int i=1; i<=x; i++) {
        sum = sum * i;
    }
    printf("your factorial is %d\n",sum);
    return 0;
}