#include<iostream>
#include<cstdlib>
#include "Arithmetic_Namespace.h"
using namespace std;

// namespace arithmetic
// {
//     int addition(int value_1,int value_2)
//     {
//         return (value_1 + value_2);
//     }

//     int subtraction(int value_1,int value_2)
//     {
//         return (value_1 - value_2);
//     }

//     int multiplication(int value_1,int value_2)
//     {
//         return (value_1 * value_2);
//     }

//     int division(int value_1,int value_2)
//     {
//         return (value_1 / value_2);
//     }

//     int modulos(int value_1,int value_2)
//     {
//         return (value_1 % value_2);
//     }
// }

using namespace arithmetic;
int main()
{
    int num1,num2,choice,result;
    cout<<"Enter two numbers to calculate the arithmetic operations : ";
    cin>>num1>>num2;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus"<<endl;
    cout<<"Enter your choice to begin the Calculation : "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: 
            result=addition(num1,num2); 
            break;
        case 2:
            result=subtraction(num1,num2);
            break;
        case 3:
            result=multiplication(num1,num2);
            break;
        case 4:
            result=division(num1,num2);
            break;
        case 5:
            result=modulos(num1,num2);
            break;
        default:
            cout<<"Oops ... ! Invalid Choice ;\nKindly enter the choice 1 to 5 only . . ."<<endl;
            exit (0);
    }
    cout<<"Based on your choice, The Result of the Arithmetic Calculation is : "<<result<<endl;
    return 0;
}