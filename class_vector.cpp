#include <iostream>

using namespace std;
class Vector
{
    private:
        int x;
        int y;
        int id;
    public:
        Vector();
        Vector(int input1, int input2)
        {
            this->x = input1;
            this->y = input2;
            cout << "Sample vector" << endl;
            cout << this->x << "\t" << this->y << endl;
            id++;
        }
        int dotproduct(const Vector &obj)
        {
            return this->x*obj.x + this->y*obj.y;
        }
        void add(const Vector &obj)
        {
            cout << "Addition between 2 vectors" << endl;
            cout << this->x <<" + " << obj.x << " = " << (this->x + obj.x) << "\t";
            cout << this->y <<" + " << obj.y << " = " << (this->y + obj.y) << endl;
        }
        ~Vector() { cout << "Deleting the vector " << this->id << endl; }
        void checkVector(const Vector &obj)
        {
            if ( (this->x == obj.x) && (this->y == obj.y) )
            {
                cout << "Two vectors are the same" << endl;
            }
            else { cout << "Two vectors are different" << endl; }
        }
};

int main()
{
    Vector v1(2,4);
    Vector v2(1,5);
    cout << "Dot product between 2 vectors: " << v1.dotproduct(v2) << endl;
    v1.add(v2);
    v1.checkVector(v2);
    return 0;
}