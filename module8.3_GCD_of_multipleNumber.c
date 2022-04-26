#include<stdio.h>
int main(){
    int a,b,c,r1;
    printf("Enters the number : ");
    scanf("%d %d %d",&a,&b,&c);
    for (int i = 1; i <=a&&i<=b&&i<=c; i++)
    {
        if (a%i==0&&b%i==0&&c%i==0)
        {
            printf("%d\n",i);
            r1=i;
        }
        
    }
    
    
    printf("GCD is %d",r1);
}