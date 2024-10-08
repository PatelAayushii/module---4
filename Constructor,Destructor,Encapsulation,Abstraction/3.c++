/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables*/

#include<iostream>
using namespace std;
class car
{
    private :
        string company;
        string model;
        int year;
    public:
        void set(string c,string m,int y)
        {
            company=c;
            model=m;
            year=y;
        }
        void get()
        {
            cout<<"\n company name = "<<company;
            cout<<"\n model name = "<<model;
            cout<<"\n year = "<<year;
        }
};
int main()
{
    int year;
    string company,model;
    cout<<"\n enter the company name =  ";
    cin>>company;
    cout<<"\n enter the model name =  ";
    cin>>model;
    cout<<"\n enter the year =  ";
    cin>>year;
    car c1;
    c1.set(company,model,year);
    c1.get();
    return 0;
}