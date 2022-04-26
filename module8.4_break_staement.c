#include<stdio.h>
#include<stdbool.h>
int main(){
    while (true)
    { int a;
         scanf("%d",&a);
     
       if (a%8==5) break;
         printf("%d\n",a);
    //    here when our input is 5 then the program is ended
    }
    
}