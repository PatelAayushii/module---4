/*5 : Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene*/

#include<iostream>
using namespace std;
class triangle
{
    private:
        float angle1,angle2,angle3;
    public:
        triangle(float a1,float a2,float a3)
        {
            angle1 = a1;
            angle2 = a2;
            angle3 = a3;
        }
        void display()
            {
            if (angle1 == angle2 && angle2 == angle3 == angle3 && angle1 == angle3)
            {
                cout<<"\n triangle is eqilateral ";
            }
            else if (angle1 == angle2 || angle2 == angle3 == angle3 || angle3 == angle1)
            {
                cout<<"\n triangle is isosceles ";
            }
            else 
            {
                cout<<"\n triangle is scalene ";
           }
    }
};
int main()
{
    float angle1,angle2,angle3;
    cout<<"\n enter the angle 1 = ";
    cin>>angle1;
    cout<<"\n enter the angle 2 = ";
    cin>>angle2;
    cout<<"\n enter the angle 3 = ";
    cin>>angle3;
    triangle t1(angle1,angle2,angle3);
   
    t1. display();
    return 0;
}