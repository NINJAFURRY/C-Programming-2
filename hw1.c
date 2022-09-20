#include<stdio.h>
//check it's an armstrong number or not
int main () {
    int n,r,sum,c=0;
    printf("enter your 3 digit integer : ");
    scanf("%d",&n);
    sum = n;
    while (sum != 0) {
        r = sum%10;
        c = c+r*r*r;
        sum = sum/10;

      
    }
    printf("%d\n",r);
    printf("%d\n",c);

    if (c == n)
    {
        printf("it's an armstrong number");
    }
    else 
    {
        printf("it's not an armstrong");

    }
    return 0;    
}