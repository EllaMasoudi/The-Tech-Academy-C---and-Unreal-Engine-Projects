
#include <string>
#include <iostream>

using namespace std;

class Shape
{
    
public:
    string color;
    void getArea(){
        cout << "area \n";
    }
};

class Rectangle : public Shape {
public:
    double height;
    double width;
};

class Triangle : public Shape {
public:
    double Base;
    double height;
};

class circle : public Shape
{
    double radius;
};
int main()
{
    Rectangle rectangle;
    rectangle.getArea();
   
    return 0;
    
}

