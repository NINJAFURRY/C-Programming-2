#include<stdio.h>
int main () {
    int x, sum;
    printf("enter your netural number : ");
    scanf("%d",&x);
    for(int i = 1,j=x; i<=x,j>=1;i++,j--) {
        sum = sum + i;
        printf("%d\n",j);
    }
    printf("sum is %d \n",sum);
}