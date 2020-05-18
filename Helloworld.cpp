#include<iostream>
/*In this code namespace is not mentioned because
 its mentioned locally inside the code
*/
int main(){

    std::cout<<"HelloWorld\n";
/*  << is an operator , operators work on operand .
cout and "HelloWorld" are operands. cout is an object and iostream is a class.
What happens in this code is that HelloWorld is passed to cout using the operator.
*/    
     return 0;
}
/* Alternate Code 

#include<iostream>
using namespace std;  //using directive
This creates naming conflicts but the code above produ 

int main()
{
    cout<<"HelloWorld\n";
    return 0 
}
using std::cout; // Reduces naming conflict to an extent, can also be used locally.
*/