// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class Animal
{
    private:
        string name;
        
    public:
        void setName(string inputName)
        {
            this->name = inputName;
        }
        void print()
        {
            cout<<"Name: "<<this->name<< endl;
        } 
};
class Cat: public Animal
{

};

int main() {
    Animal cat_1;
    cat_1.setName("Calico");
    cat_1.print();

    Cat cat_2;
    cat_2.setName("Scottish Fold");
    cat_2.print();
    
    return 0;
}