
#include <string>
#include <iostream>

using namespace std;

class Shape
{
    public:
        string color;
        virtual double getArea() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double a, double b) {
        height = a;
        width = b;
    }


    double getArea(){
        return height * width;
    }

    double height;
    double width;
};

class Triangle : public Shape {
public:
    Triangle(double base, double height) {
        this->base = base;
        this->height = height;
    }

    double getArea() {
        return (base * height) / 2;
    }
    double base;
    double height;
};

class Circle : public Shape
{
public:

    Circle(double r) {
        radius = r;
    }
    double getArea() {
        return radius * radius * 3.14;
    }
    double radius;
};

int main()
{
    Rectangle rectangle(10,20);
    Circle circle(4.2);
    Triangle t(10, 20);
    cout << rectangle.getArea() << endl;
    cout << circle.getArea() << endl;
    cout << t.getArea() << endl;

    return 0;
    
}

