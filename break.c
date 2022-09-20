#include<stdio.h>
int main () {
    int x;
    printf("enter your number : ");
    scanf("%d",&x);
    for (int i=5; i<=x; i++) {
        if (i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    printf("end\n");
    return 0;
}