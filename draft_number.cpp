#include <iostream>
using namespace std;

class TwoNumber {
    public:
        const static int value;
};

class OneNumber {
    public:
        const static int value;
        
        TwoNumber operator+(const OneNumber other) {
            return TwoNumber();
        }
};

const int OneNumber::value = 1;
const int TwoNumber::value = 2;

int main() 
{
    OneNumber v1;
    cout << v1.value << endl;
    
    OneNumber v2;
    cout << v2.value << endl;
    
    TwoNumber v3 = v1 + v2;
    cout << v3.value << endl;

    return 0;
}