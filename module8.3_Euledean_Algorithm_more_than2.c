#include<stdio.h>
int main(){
    int a,b,c,remainder;
    printf("Enters the number");
    scanf("%d %d %d",&a,&b,&c);
    while (a%c>0)
    {
        remainder=a%c;
        a=c;
        c=remainder;
       while (b%c>0)
    {
      
       remainder=b%c;
       b=c;
       c=remainder;
       printf("b %d, a %d\n",c,b); 
    }
    }
    
    
    printf("GCD is %d",c);
}