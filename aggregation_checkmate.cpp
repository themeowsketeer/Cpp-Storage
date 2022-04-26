#include <iostream>
#include <vector>

using namespace std;

class point
{
private:
    int x;
    int y;

public:
    point(){};
    point(int x_coor, int y_coor) : x(x_coor), y(y_coor){};
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
    point *centralPoint;

public:
    TwoDShape(){};
    virtual double area() = 0; // pure virtual
    virtual double perimeter() = 0;
    virtual void printInfo() = 0;
    ~TwoDShape()
    {
        delete centralPoint;
        cout << " Deleted central point " << endl;
    }
};

class rectangle : public TwoDShape
{
private:
    int height;
    int width;

public:
    rectangle(){};
    rectangle(int height, int width, point *point)
    {
        this->height = height;
        this->width = width;
        this->centralPoint = point;
    };
    void printInfo()
    {
        cout << "This is a rectangle " << endl;
        cout << "Height: " << height << endl;
        cout << "Width: " << width << endl;
        centralPoint->printCoor();
    };
    double area()
    {
        return height * width;
    };
    double perimeter()
    {
        return (height + width) * 2;
    };
};

class square : public TwoDShape
{
private:
    double side;

public:
    square(){};
    square(double side, point *point)
    {
        this->centralPoint = point;
        this->side = side;
    }
    void printInfo()
    {
        cout << "This is a square" << endl;
        cout << "Side: " << side << endl;
        centralPoint->printCoor();
    };
    double area()
    {
        return side * side;
    };
    double perimeter()
    {
        return 4 * side;
    };
};

class circle : public TwoDShape
{
private:
    double radius;

public:
    circle(){};
    circle(double radius, point *point)
    {
        this->centralPoint = point;
        this->radius = radius;
    };
    void printInfo()
    {
        cout << "This is a circle" << endl;
        cout << "Radius: " << radius << endl;
        centralPoint->printCoor();
    };
    double area()
    {
        return radius * radius * 3.14;
    };
    double perimeter()
    {
        return 2 * radius * 3.14;
    };
};

int main()
{

    point p1(7, 8);
    point p2(5, 6);
    point p3(3, 4);

    rectangle r1(7, 10, &p1);
    square s1(5, &p2);
    circle c1(4.5, &p3);

    vector<TwoDShape *> list_shapes;
    list_shapes.push_back(&r1);
    list_shapes.push_back(&s1);
    list_shapes.push_back(&c1);

    for (int i = 0; i < list_shapes.size(); ++i)
    {
        list_shapes.at(i)->area();
        list_shapes.at(i)->perimeter();
        list_shapes.at(i)->printInfo();
    }

    return 0;
}