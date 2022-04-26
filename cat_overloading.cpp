#include <iostream>
#include <cstring>

using namespace std;

class Cat
{
    private:
        string name;
        int age;
    public:
        Cat(string name, int age)
        {
            this->name = name;
            this->age = age;
        };
        void operator--() 
        {
            this->age--;
        };
        void operator--(int)
        {
            this->age--;
        }
        int getAge()
        {
            return this->age;
        }
};

int main()
{
    Cat calico("Calico", 7);
    cout << " Current age: ";
    cout << calico.getAge() << endl;
    cout << " First reduction: ";
    calico--;
    cout << calico.getAge() << endl;
    cout << " Second reduction ";
    --calico;
    cout << calico.getAge() << endl;
}