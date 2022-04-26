#include<stdio.h>
int main(){
    int x;
    do{
        scanf("%d",&x);
    }
    while (x%2!=0); //here the program will take input until we give even number 
    // as soon as we give even number it will print the number and end the execution
    printf("your input is %d",x);
    
}
//in do while loop the program will execute only one definetly but in while loop it is not confirmed