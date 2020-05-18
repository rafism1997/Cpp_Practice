/* 

Main function is called upon as soon as 
the program is executed

Calling funtions :

function_name();

Data passed onto the functions are called arguments.Often more than one argument is passed.

function_name(5,2)

If the function doesn't return anything we can use a semicolon at the end .

Otherwise we should not add a semicolon at end.

x=hello(10,2);
hello(10,2)*2;

int main(arguments){
    return 0;
}
data in argumnets are stored in parameters.

declaration 

int multiply(int,int);

multiply(int x, in y)
{
    return x*y;
}
//The above code from is a function definition
multiply(2,5);
The above line of code is function calling

Declarations are stored in headers,
*/
#include<iostream>
#include<cmath>
using std::cout;
using std::cin;

int main()
{
    int base,exponent;
    cout<<"What is the base?: ";
    cin>>base;
    cout<<"What is the exponent?: ";
    cin>>exponent;
    //cout<<pow(base,exponent)<<std::endl;//pow is directly in cout which is why number is not displayed completely
    double power =pow(base,exponent);
    cout<<power<<std::endl;
}
