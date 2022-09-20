#include<stdio.h>
int main () {
    int n;
    printf("enter your number for decrement and increment: ");
    scanf("%d",&n);
    for (int i=n;i>=1;i-- ){
        printf("%d\n",i);
    }
  
    for (int i=1;i<=n;i++) {
        printf("%d\n",i);
    }
    
}