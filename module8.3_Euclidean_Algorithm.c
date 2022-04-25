#include<stdio.h>
int main(){
    int a,b,remainder;
    printf("Enters the number");
    scanf("%d %d",&a,&b);
    while (a%b>0)
    {
      
       remainder=a%b;
       a=b;
       b=remainder;
       printf("b %d, a %d\n",b,a); 
    }
    
    printf("GCD is %d",b);
}