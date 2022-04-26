// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Math1
{
    public:
        ~Math1() { cout << "Deleting the information" << endl; };
        bool isEven(int number)
        {
            bool result = false;
            if (number % 2 == 0)
            {
                return result = true;
            }
            else { return result = false; }
        };
        int factorial(int number)
        {
            int result=1;
            for (int i=1 ; i<=number ; i++)
            {
                result *= i;
            }
            return result;
        }
        void printResult(int number)
        {
            cout << "Factorial of "<< number << " is: " << factorial(number) << endl;
            cout << number << " is an even number?: " << isEven(number) << endl;
        }
};
class Math2
{
    public:
        ~Math2() { cout << "Deleting the information" << endl; };
        bool isEven(int number)
        {
            bool result = false;
            if (number % 2 == 0)
            {
                return result = true;
            }
            else { return result = false; }
        };
        int factorial(int number)
        {
            int result=1;
            for (int i=1 ; i<=number ; i++)
            {
                result *= i;
            }
            return result;
        };
        double estimateE(int loops)
        {
            double result = 1.0;
            for (int i=1 ; i<=loops ; i++)
            {
                result += 1.0/factorial(i);
            }
            return result;
        };
        void printResult(int number)
        {
            cout << "Factorial of "<< number << " is: " << factorial(number) << endl;
            cout << number << " is an even number?: " << isEven(number) << endl;
            cout << "Estimation of Euler number through "<< (number + 6) << " loops: " << estimateE(number + 6) << endl;
        }
};

int main() {
    int sample = 4;

    Math1 m1;
    m1.printResult(sample);

    Math2 m2;
    m2.printResult(sample);
    
    return 0;
}