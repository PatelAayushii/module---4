/* 5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter*/

#include<iostream>
using namespace std;
class ractangle 
{
    private:
        double length;
        double width;
    public:
        void set(double l,double w)
        {
            length = l;
            width = w;
        } 
        double area()
        {
            return (length*width);
        } 
        double perimeter()
        {
            return (length+width)*2;
        }  
};
int main()
{
    double length,width;
    cout<<"\n enter the length = ";
    cin>>length;
    cout<<"\n enter the width = ";
    cin>>width;
    ractangle r1;
    r1.set(length,width);
    r1.area();
    r1.perimeter();
    cout<<"\n area of rectangle is "<<r1.area();
    cout<<"\n perimeter of ractangle is "<<r1.perimeter();
    return 0;
}