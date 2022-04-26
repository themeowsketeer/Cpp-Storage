#include <iostream>
#include <string>

using namespace std;

class ID 
{
    private:
        int number;
        string type;
    public:
        ID(int number, string type) 
        {
            this->number = number;
            this->type = type;
        }
        void print() 
        {
            cout << "ID number: " << number
                 << " - ID type: " << type << endl;
        }
};

class Employee 
{
    private:
        string name;
        
    protected:
        double salary;
        ID* id;
        
    public:
        Employee(string name, double salary, ID* id) 
        {
            this->name = name;
            this->salary = salary;
            this->id = id;
        }
        
        void print() 
        {
            cout << "Name: " << name << " - ";
            id->print();
        }
};

class Manager : public Employee 
{
    private:
        double bonus;
        
    public:
        Manager(string name, double salary, double bonus, ID* id) : Employee(name, salary, id) 
        {
            this->bonus = bonus;
        }
        
        void print() 
        {
            Employee::print();
            cout << " and bonus: " << bonus << endl;
        }
};

int main() 
{
    ID peterID = ID(12345, "type 1");
    Employee peter("Peter", 50, &peterID);
    peter.print();
    
    ID maryID = ID(56789, "type 2");
    Manager mary("Mary", 50, 20, &maryID);
    mary.print();
    
    return 0;
}