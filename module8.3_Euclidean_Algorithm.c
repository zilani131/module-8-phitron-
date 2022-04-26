#include<stdio.h>
int main(){
    int a,a,remainder;
    printf("Enters the number");
    scanf("%d %d ",&a,&b);
   
       while (a%b>0)
    {
      
       remainder=a%b;
       a=b;
       b=remainder;
       
    }
    
    
    
    printf("GCD is %d",b);
}