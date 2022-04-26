#include<stdio.h>
int main(){
    int sum=0,num;
    scanf("%d",&num);
    while (num>0)
    {int digit=num%10;
    num/=10;
    if (digit%2)
    { //while digit%2 =true than ignore. it will be true if there is remainder 
        continue;
    }
    sum+=digit;
    
        /* code */
    }
    printf("sum is %d",sum);
    
}