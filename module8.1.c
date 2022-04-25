#include<stdio.h>
int main(){
      int money=0,target=100;
      while (money<=target)
      {
         printf("Need more money. Enter amount: ");
         int given;
         scanf("%d",&given);
         money+=given;
         printf("current money : %d\n",money);
        
      }

return 0;

    /* initial value;
     while(condition){
        statement; 
        increament or decreament; it is optional and 
        we the increament and decreament can be variable 
        we use while mainly when we don't know how many
         times the loop will continue


        for loop;
        for(initial value;condition;loopexpression)
        {
            statement 
        }
        main difference is in for loop we 
        know how many times the loop continue
         but in while loop we can give a condition
          until it is true it will continue  to loop
          some example 
          for(int i=1;i<=5;i++){
              printf("%d\n",i);
          }
        while loop:
        int i=1;
        while(i<=5){
            printf("%d\n",i);
            i++;
        }
     */
}