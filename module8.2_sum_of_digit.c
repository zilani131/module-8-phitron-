#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int digit,number,sum=0; //by modulus  the input
    //   value by 10 means we finding the single digit
    printf("Digit\tSum\n");
    while (x>0)
    {  
       digit=x%10;
       x/=10;
       sum+=digit;
       printf("%d\t%d\n",digit,sum);

    }
    printf("total sum %d",sum);
    return 0;
}