#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int Digit,reversed=0;
    while (x>0)
    {
       Digit=x%10;

       x/=10;
      reversed=reversed*10+Digit;
       printf("Sum %d, X %d,Digit %d\n",reversed,x,Digit);
    }
    printf("%d",reversed);
}