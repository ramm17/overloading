#include<iostream>
#include<conio.h>
using namespace std;
int area(int);
float area(float,int);
int area(int,int,int);
int main()
{
    int sl,h,pl,pb,ph;
    float r;
    cout<<"Enter the length for square: ";
    cin>>sl;
    cout<<"Enter the radius and height for cylinder: "<<endl;
    cin>>r>>h;
    cout<<"Enter the length,breadth and height resp. for parallelepiped: "<<endl;
    cin>>pl>>pb>>ph;
    cout<<"Area of Square: "<<area(sl)<<endl;
    cout<<"Surface Area of Cylinder: "<<area(r,h)<<endl;
    cout<<"Area of Parallelepiped: "<<area(pl,pb,ph)<<endl;
    getch();
    return 0;
}
int area(int s)//area of square
{
    return(s*s);
}
float area(float r, int h)//surface area of cylinder
{
    return(2*3.14*r*h);
}
int area(int l,int b,int h)//area of parallelepiped
{
    return(2*(l*b+b*h+h*l));
}


