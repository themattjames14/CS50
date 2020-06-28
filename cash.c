#include<stdio.h>
#include<cs50.h>
#include<math.h>

//prompt user for integer change
int main(void)
{
    float dollar;
    int cent;
    
    //prompts user to input the amount owed (in dollars)
    do
    {
     dollar = get_float("please enter the amount: ");
     cent = round(dollar * 100);
    }
    
    while (dollar < 0.0);
    // initialize the amount of coins(we have zero to start)
    int coins = 0;
    //
    while (cent >= 25)
    {
        coins++;
        cent = cent - 25;
    }
    
    while (cent >= 10 && cent < 25)
    {
        coins++;
        cent = cent - 10;
    }
     
     while (cent >= 5 && cent < 10)
     {
         coins++;
         cent = cent - 5;
     }
     
     while (cent >= 1 && cent < 5)
     {
         coins++;
         cent = cent - 1;
     }
     printf("minimum number of coins required: %i\n", coins);
}
