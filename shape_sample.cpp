#include <iostream>
#include <vector>
#include <string>

using namespace std;
class shape
{
    protected:
        string shape_name;
    public:
        virtual double area()=0;
        virtual double perimeter()=0;
        string showName()
        {
            return shape_name;
        }
};
class rectangle : public shape
{
    private:
        int height;
        int width;
    public:
        rectangle(string name, int height, int width)
        {
            this->shape_name=name;
            this->height=height;
            this->width=width;
        }
        double area()
        {
            return height*width;
        }
        double perimeter()
        {
            return (height + width)*2;
        }
};

class square : public shape
{
    private:
        double side;
    public:
        square(string name, double side)
        {
            this->shape_name=name;
            this->side=side;
        }
        double area()
        {
            return side*side;
        }
        double perimeter()
        {
            return 4*side;
        }
};
class circle : public shape
{
    private:
        double radius;
    public:
        circle(string name, double radius)
        {
            this->shape_name=name;
            this->radius=radius;
        }
        double area()
        {
            return radius*radius*3.14;
        }
        double perimeter()
        {
            return 2*radius*3.14;
        }
};
int main()
{
    rectangle r1("Rectangle",7,10);
    square s1("Square",5);
    circle c1("Circle",4.5);
    vector<shape*> shape_list;
    shape_list.push_back(&r1);
    shape_list.push_back(&s1);
    shape_list.push_back(&c1);
    for (int i = 0; i < shape_list.size(); i++)
    {
        cout << "Shape type: " << shape_list.at(i)->showName() << endl;
        cout << "Area of the shape: " << shape_list.at(i)->area() << endl;
        cout << "Perimeter of the shape: " << shape_list.at(i)->perimeter() << endl;
        cout << endl;
    }
    return 0;
}