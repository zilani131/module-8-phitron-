#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int gcd;
    for (int  i = 1; i <= x&&i<=y; i++)
     //giving and operator to reduce the 
    // loop as we have to loop until the minimum number
    {
       if (x%i==0&&y%i==0)
       {
           printf(" common gcd is %d\n",i);
          gcd=i; //as the loop is in increament way the last 
        //   number of i is always greater than previous one
       }
       
    }
    printf("%d is largest gcd ",gcd);
}