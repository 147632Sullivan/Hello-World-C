#include <iostream>
using namespace std;

int main()
{
     int num1, num2; //Declare 2 integer variables
     bool boolVar1=true, boolVar2= false; //Declare and initialize two boolean variables
     cout << "Enter 1st Value"; //Prompt and capture user input
     cin >> num1;
     cout << "Enter 2nd Value";
     cin >> num2;

     //Arithmetic operators
     cout <<"Sum Of" <<num1 <<"+" <<num2 <<"=" <<num1+num2 <<endl; //Addition operator
     cout <<"Difference Of" <<num1 <<"-" <<num2 <<"=" <<num1-num2 <<endl; //Subtraction Operator
     cout <<"Product of" <<num1 <<"*" <<num2 << "=" <<num1*num2 <<endl; //Multiplication Operator
     cout <<"Division of" <<num1 <<"/" <<num2 << "=" <<num1/num2 <<endl; //Division Operator
     cout <<"Modulus of" <<num1 <<"%" <<num2 <<"=" <<num1%num2 <<endl; //Modulus Operator(It shows the remainder)
     cout <<"Increment num1 by 1:  " << ++num1 <<endl; //Increment Operator(++) as a prefix
     cout <<"Increment num1 by 1:  " << num1++ <<endl; //Increment Operator(++) as a postfix
     cout <<"Decrement num1 by 1:  " << --num1 <<endl; //Decrement Operator(--) as a prefix
     cout <<"Decrement num1 by 1:  " << num1-- <<endl; //Decrement Operator(--) as a postfix
     num1 +=3; //Increment and assign operation e.g increase num1 by 3 //This is the same as num1 + 3
     cout <<"Increment and assign num1 by 3" <<num1 <<endl;


     //Comparison Operators
     cout <<num1 <<"greater than" <<num2 <<"=" <<(bool)(num1 >num2) <<endl; //Greater than Operator (Bool) casts from integer to boolean 
     cout <<num1 <<"less than" <<num2 <<"=" <<(bool)(num1 < num2) <<endl; //Less than Operator
     cout <<num1 <<"equal to" <<num2 <<"=" <<(bool)(num1 == num2) <<endl; //Equal To Operator
     cout <<num1 <<"not equal to" <<num2 <<"=" <<(bool )(num1 != num2) <<endl; //Not Equal To Operator

     //Boolean Operators
     cout <<boolVar1 <<"&&" <<boolVar2 <<"=" <<(boolVar1 && boolVar2) <<endl; //Boolean Operator &&
     cout <<boolVar1 <<"||" <<boolVar2 <<"=" <<(boolVar1 || boolVar2) <<endl; //Boolean Operator ||
     cout <<"!" <<boolVar1 <<"=" <<(!boolVar1) <<endl;

     //Pointer Operators
     int *ptr = nullptr; //Declaring a pointer
     ptr = &num1; //Assigning a value to the pointer
     cout <<"Address of num1 =" <<&num1 <<endl; //Output address of num1
     cout<<"Value at memory location pointed by ptr =" <<*ptr <<endl; //Deference the pointer to get the value at the memory location




     return 0;
     }
