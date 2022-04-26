#include <iostream>
#include <vector>

using namespace std;

class point
{
    private:
        int x;
        int y;
    public:
        point() {};
        point(int x_coor, int y_coor) : x(x_coor), y(y_coor) {};
        inline void printCoor()
        {
            cout << "Central point: ";
            cout << "(" << x << ",";
            cout << y << ")" << endl;
        }
};

class TwoDShape
{
    protected:
        point centralPoint;
    public:
        TwoDShape() {};
        virtual double area() { double result = 0; return result; };
        virtual double perimeter() { double result = 0; return result; };
        virtual void printInfo() {};
};

class rectangle : public TwoDShape
{
    private:
        int height;
        int width;
    public:
        rectangle() {};
        rectangle(int height, int width, point coordi)
        {
            this->centralPoint = coordi;
            this->height=height;
            this->width=width;
        };
        void printInfo()
        {
            cout << "This is a rectangle" << endl;
            cout << "Height: " << height << endl;
            cout << "Width: " << width << endl;
            centralPoint.printCoor();
        };
        double area()
        {
            return height*width;
        };
        double perimeter()
        {
            return (height + width)*2;
        };
};

class square : public TwoDShape
{
    private:
        double side;
    public:
        square() {};
        square(double side, point coordi)
        {
            this->centralPoint = coordi;
            this->side=side;
        }
        void printInfo()
        {
            cout << "This is a square" << endl;
            cout << "Side: " << side << endl;
            centralPoint.printCoor();
        };
        double area()
        {
            return side*side;
        };
        double perimeter()
        {
            return 4*side;
        };
};

class circle : public TwoDShape
{
    private:
        double radius;
    public:
        circle() {};
        circle(double radius, point coordi)
        {
            this->centralPoint = coordi;
            this->radius = radius;
        };
        void printInfo()
        {
            cout << "This is a circle" << endl;
            cout << "Radius: " << radius << endl;
            centralPoint.printCoor();
        };
        double area()
        {
            return radius*radius*3.14;
        };
        double perimeter()
        {
            return 2*radius*3.14;
        };
};

int main()
{
    TwoDShape shape_list;
    point coor_1(7,8);
    point coor_2(5,6);
    point coor_3(3,4);

    rectangle r1(7,10,coor_1);
    square s1(5,coor_2);
    circle c1(4.5,coor_3);

    vector<TwoDShape*> list_shapes={&r1,&s1,&c1};
    
    for (TwoDShape* i : list_shapes)
    {
        i->printInfo();
        cout << "Area and perimeter of the shape: " <<
        i->area() << " & " <<
        i->perimeter() << endl << endl;
    }

    return 0;
}