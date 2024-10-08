//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
    private :
        int num1,num2;
    public :
    void add()
    {
        cout<<"\n enter the num1 = ";
        cin>>num1;
        cout<<"\n enter the num2 = ";
        cin>>num2;
        cout<<"addition of "<<num1<<"and "<<num2<<"is = "<<  num1+num2;
    }
     void sub()
    {
        cout<<"\n enter the num1 = ";
        cin>>num1;
        cout<<"\n enter the num2 = ";
        cin>>num2;
        cout<<"substriction of "<< num1<<" and "<< num2<<" is = "<<  num1-num2;
    }
     void mul()
    {
        cout<<"\n enter the num1 = ";
        cin>>num1;
        cout<<"\n enter the num2 = ";
        cin>>num2;
        cout<<"multiplication of "<<num1<<"and "<<num2<<"is = "<<  num1*num2;
    }
     void div()
    {
        cout<<"\n enter the num1 = ";
        cin>>num1;
        cout<<"\n enter the num2 = ";
        cin>>num2;
        cout<<"division of "<<num1<<"and "<<num2<<"is = "<<  num1/num2;
    }
        
};
int main()
{
     calculator c1,c2,c3,c4;
     c1.add();
     c2.sub();
     c3.mul();
     c4.div();
     return 0;
}


