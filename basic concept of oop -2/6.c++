/*6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables */

#include<iostream>
using namespace std;
  class person
  {
    private:
        string name;
        int age;
        string country;
    public :
        void setvalue(string n,int a,string c)
         {
            name = n;
            age= a;
            country = c;
        }
        void getvalue()
        {
            cout<<"\n name = "<<name;
            cout<<"\n age = "<<age;
            cout<<"\n country = "<<country;
        }

   
  };
int main()
{
    person p1,p2,p3;;
    p1.setvalue("adhrv",21,"india");
    p2.setvalue("wahaj ali",31,"pakistan");
    p3.setvalue("wednsday",18,"usa");
    
    


    p1.getvalue();
    p2.getvalue();
    p3.getvalue();

    return 0;
}