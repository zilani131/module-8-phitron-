#include<stdio.h>
int main(){
    for (int i = 1; i <= 10; i++)
    {   if (i%3) continue;
    // here i%3 value is true if the remainder contain 
    // as only writing i%3 it will skip the number which has remainder
 
        printf("%d---->",i);
        for (int j= 0; j < 10; j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
        
    }
    
}
/*
#include<stdio.h>
int main(){
    for (int i = 1; i <= 10; i++)
    {   if (i%3==0) continue;
      //here where the remainder is 0 it will continue
        printf("%d---->",i);
        for (int j= 0; j < 10; j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
        
    }
    
}
*/