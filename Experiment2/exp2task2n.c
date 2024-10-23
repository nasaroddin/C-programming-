/*
Aim:Write a program to find the sum of all the odd
numbers between numbers entered by the
User.
Name       : Nasaroddin Salim Kazi 
UNI        : 241A040
Roll No    : 33
Div        : A2
Department : Artificial intelligence and data science 
*/
#include<stdio.h>
int main(){
printf("\t\t\t ***Sum of odd numbers*** \n\n\n");
 // initialization of all the variables
int low_range,high_range,remainder,sum=0,odd_num;
 // reading all  the inputs
printf("Enter the low end of the range\t:");
 scanf("%d",&low_range);
printf("Enter the high end of the range\t:");
 scanf("%d",&high_range);
 // main logic using conditional satements
 //checking to see if the high end of the given range > low end of the given range
if (low_range<high_range)
{  // will continue if high range > low range
 for ( odd_num=low_range ;odd_num <= high_range; odd_num++)
     {// will loop through all the numbers in the given range
         remainder = odd_num%2;

         if(remainder != 0)
          {//if the number is odd the number will be added into the sum
           sum =odd_num+sum ;
          }
      }
      //result
     printf("The sum of all odd numbers in the given range of %d to %d is equal to: %d\n",low_range,high_range, sum );
}
else
{ //will output if the high range < low range 
 printf("invalid range the low range must be greater the high range");
}
  return 0;
  }