#include<stdio.h>
int main () {
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    for(int i = 1;i<=10;i++){
        printf("%d\n",x*i);
    }
}