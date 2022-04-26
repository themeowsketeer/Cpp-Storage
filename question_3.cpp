#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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
        int getX()
        {
            return this->x;
        }
        int getY()
        {
            return this->y;
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
        double distance(point &P1, point &P2)
        {
            double part_1 = pow( ( P1.getX() - P2.getX() ),2);
            double part_2 = pow( ( P1.getY() - P2.getY() ),2);
            double result = pow( ( part_1 + part_2 ), 0.5);
            return result;
        };
        double areaCalc( vector<TwoDShape*> sample)
        {
            double result = 0.0;
            for (int i = 0; i < sample.size(); i++)
            {
                result += sample.at(i)->area();
            };
            return result;
        }
        void perimeterPrint(vector<TwoDShape*> sample)
        {
            vector<double> perimeter_list;

            for (int i = 0; i < sample.size(); i++)
            {
                perimeter_list.push_back(sample.at(i)->perimeter());
            }
            sort(perimeter_list.begin(), perimeter_list.end(), greater<double>());
            cout << "List of all perimeters of the shapes: ";
            for (double i : perimeter_list)
            {
                cout << i << "  ";
            }
        }
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

    cout << "Distance between square and circle = " << 
    shape_list.distance(coor_1,coor_2) << endl << endl;

    cout << "Total area of all 3 shapes: " << shape_list.areaCalc(list_shapes) << endl << endl;

    shape_list.perimeterPrint(list_shapes);

    return 0;
}