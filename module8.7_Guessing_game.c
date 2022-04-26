#include<stdio.h>
#include<stdlib.h>
int main(){
srand(time(0)); //srand(time(0))  it is used to give every time an different hidden number
int hiddenNumber=rand()%100+1; //as we mod by 100 we will always get the value 
// below 100 and +1 is given to limit the hidden upto 100
printf("%d\n",hiddenNumber);
int number_of_guess=0;
while (number_of_guess<10)
{    int s;
scanf("%d",&s);

    if (hiddenNumber==s)
    {
        printf("you are right .Hidden number is %d",hiddenNumber);
        break;
    }
    else if (hiddenNumber<s)

    {
        printf("Guess smaller\n");

    }
    else{
        printf("Guess larger\n");
    }
    number_of_guess++;
}
if (number_of_guess==10)

printf("You loss");

}