#include <iostream>

using namespace std;

class Father
{
    public:
        void advice()
        {
            cout << " Work hard! " << endl;
        }
        void command()
        {
            cout << " Start doing homework!" << endl;
        }
        void suggest()
        {
            cout << " Try adapting new learning way!" << endl;
        }
};

class Mother
{
    public:
        void advice()
        {
            cout << " Take a rest! " << endl;
        }
        void recommend()
        {
            cout << " How about doing this? " << endl;
        }
        void suggest()
        {
            cout << " Let's do something different! " << endl;
        }
};

class Son : public Father, public Mother
{};

int main()
{
    Son Tom = Son();
    Tom.Father::advice();
    Tom.Mother::advice();
    Tom.Father::command();
    Tom.Mother::recommend();
    Tom.Father::suggest();
    Tom.Mother::suggest();

}