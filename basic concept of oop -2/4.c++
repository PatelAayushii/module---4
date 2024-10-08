/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference*/

#include<iostream>
using namespace std;
class circle
{
    private:
        double  radius;
    public:
        void setradius(double r)
        {
            radius = r;
        }
        double area()
        {
            return 3.14*(radius*radius);
        }
        double circumfernce()
        {
            return 3.14*(2*radius);
        }

};
int main()
{
    
    double radius;
    cout<<"\n enter the value of redius = ";
    cin>>radius;
    circle c1;
    c1.setradius(radius);
    cout<<"\n area of circle is = "<<c1.area();
    cout<<"\n circumference of circle is = "<<c1.circumfernce();
    return 0;
}