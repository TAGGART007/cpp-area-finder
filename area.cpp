#include<iostream>
#include "area.h"

using namespace std;

void Square()
{
    int a;
    cout<<"\n Enter the side of the square:  \n";
    cin>>a;
    cout<<"Area of the square is:"<<a*a;
}
void Circle()
{
    int r;
    cout<<"\n Enter the Radius of the Circle:  \n";
    cin>>r;
    cout<<"Area of the square is: "<<r*3.15;
}
void Rectangle()
{
    int l,b;
    cout<<"\n Enter the length of the rectangle:  \n";
    cin>>l;
    cout<<"Enter the Bredth of the rectangle:  \n";
    cin>>b;
    cout<<"Area of the Rectangle is: "<<l*b;
}
void Triangle()
{
    int b,h;
    cout<<"\n Enter the base of the Triangle:  \n";
    cin>>b;
    cout<<"Enter the height of the Triangle:  \n";
    cin>>h;
    cout<<"Area of the Triangle is: "<<1/2*(b*h);
}
