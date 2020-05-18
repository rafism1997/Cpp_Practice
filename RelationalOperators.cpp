#include<iostream>
#include<string>
int main()
{
    std::string TorF[]={"False","True"};

    int a=100;
    int b=33;
    int c=78;

    std::cout<<"a<b is "<<TorF[a<b];
    std::cout<<"\na>b is "<<TorF[a>b];
    std::cout<<"\na!=b is "<<TorF[a!=b];
     std::cout<<"\nc >= b is "<<TorF[c>=b];
    std::cout<<"\nc <= b is "<<TorF[c<=b];  
    return 0;
}