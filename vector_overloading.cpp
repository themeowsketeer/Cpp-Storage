#include <iostream>

using namespace std;

class Vector2D
{
    private:
        int x;
        int y;
    public:
        Vector2D(int num1, int num2)
        {
            this->x = num1;
            this->y = num2;
        }
        Vector2D operator-(const Vector2D other)
        {
            Vector2D result(0,0);
            result.x = this->x - other.x;
            result.y = this->y - other.y;
            return result;
        }
        void operator--()
        {
            this->x--;
            this->y--;
        }
        bool operator==(const Vector2D other)
        {
            if ( ( this->x == other.x) && ( this->y == other.y) )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        int operator*(const Vector2D other)
        {
            return ( (this->x * other.x) + (this->y * other.y) );
        }
        void describe()
        {
            cout << this->x << "\t" << this->y << endl;
        }
};

int main()
{
    Vector2D v1(7,5);
    Vector2D v2(3,4);

    cout << "Vector 1: "; v1.describe();
    cout << "Vector 2: "; v2.describe();

    Vector2D v3 = v1 - v2;
    cout << "Result of subtraction between 2 vectors: "; v3.describe();

    bool check = v1 == v2;
    cout << "Vector 1 and vector 2 are identical ?: " << check << endl;
    int result = v1 * v2;
    cout << "Result of dot multiplication between 2 vectors: " << v1 * v2 << endl;
    return 0;
}