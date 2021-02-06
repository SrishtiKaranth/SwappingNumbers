//this is a program to swap two numbers without using a temporary variable

#include <stdio.h> //this is a preprocessor command that is used to include output and input statements such as printf and scanf
int main() //this is the main function which is the entry point of the program
{
int a=2,b=4; // two variables a and b of the data type int is declared here
printf("\n The value of a and b is : %d and %d",a,b); //this statement prints the value of a and b on the output screen
a=a+b; //the value of a changes from 2 to 6
b=a-b;//the value of b changes from 4 to 2 since value of a is now 6 and 6-4 is 2
      //we have achieved swapping the value of b with a
a=a-b; //the value of a changes from 6 to 4 since since 6-2 is 4
       //we have achieved swapping the value of a with b
printf("\n Post swapping ,the value of a and b is %d and %d respectively ",a,b); //this statement gives the output of the swapped numbers
return 0; //this is an ending statement that is used when int main() is the main function used


} //marks the end of the program

