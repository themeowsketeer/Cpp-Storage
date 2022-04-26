#include <iostream>

using namespace std;

class Complex
{
    private:
        float real;
        float imaginary;
    public:
        Complex() {};
        Complex(float part_1, float part_2) : real(part_1), imaginary(part_2) {};
        Complex(const Complex &sample)
        {
            this->real = sample.real;
            this->imaginary = sample.imaginary;
        };
        Complex operator+(const Complex &sample)
        {
            Complex result(0.0,0.0);
            result.real = this-> real + sample.imaginary;
            result.imaginary = this->imaginary + sample.imaginary;
            return result;
        };
        bool operator==(const Complex &sample)
        {
            if ( (this->real == sample.real) && ( this->imaginary == sample.imaginary ) )
            {
                return true;
            }
            else return false;
        };
        Complex operator=(const Complex &sample)
        {
            Complex result(0.0,0.0);
            result.real = sample.real;
            result.imaginary = sample.imaginary;
            return result;
        };
        void printNum()
        {
            cout << this->real << "+" << this->imaginary <<"i" << endl;
        };
};

int main()
{
    Complex num_1(7.4,2.5);
    num_1.printNum();

    Complex num_2(2.8,6.9);
    num_2.printNum();

    Complex num_3(num_2);
    cout << "Copy constructor: ";
    num_3.printNum();

    Complex num_4 = num_1;
    cout << "Assignment operator: ";
    num_4.printNum();

    Complex result_addition = num_1 + num_3;
    cout << "Addition operator: ";
    result_addition.printNum();

    bool check = num_2 == num_3;
    cout << "Comparison operator-> ";
    cout << "2nd number and 3rd number are identical ?: " << check << endl;
    return 0;
}