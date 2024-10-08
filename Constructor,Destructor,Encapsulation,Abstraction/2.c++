/*2. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include<iostream>
using namespace std;
class add
{
    public :
        add (int num1, int num2)
        {
            cout<<"\n addition of = "<<num1+num2;
        } 
};
class sub
{
    public :
        sub (int num1, int num2)
        {
            cout<<"\n substriction of = "<<num1-num2;
        } 
};
class mul
{
    public :
        mul (int num1, int num2)
        {
            cout<<"\n multiplication of = "<<num1*num2;
        } 
};
class DIV
{
    public :
        DIV (double num1, double num2)
       {
        
       
            cout<<"\n divistion of = "<<num1/num2;
    
        
       }
};

int main()
{
    int num1,num2;
    cout<<"\n enter num 1 = ";
    cin>>num1;
    cout<<"\n enter num 2 = ";
    cin>>num2;
    add a1(num1,num2);
	sub s1(num1,num2);
	mul m1(num1,num2);
	DIV d1(num1,num2);
    return 0;
}



