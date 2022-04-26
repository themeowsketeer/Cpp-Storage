#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    private:
        int employeeId;
        int departmentId;
        string name;
        string gender;
    public:
        Employee() {};
        void setInfo(int number_1, int number_2, string name, string gender)
        {
            this->employeeId = number_1;
            this->departmentId = number_1;
            this->name = name;
            this->gender = gender;
        };
        int getemployeeId()
        {
            return this->employeeId;
        }
        int getdepartmentId()
        {
            return this->departmentId;
        };
        string getName()
        {
            return this->name;
        };
        string getGender()
        {
            return this->gender;
        };
        void printInfo()
        {
            cout << "Employee's name: " << getName() << endl;
            cout << "Employee's gender: " << getGender() << endl;
            cout << "Employee's ID: " << getemployeeId() << endl;
            cout << "Employee's department ID: " << getdepartmentId() << endl << endl;
        };
};

class Manager: public Employee
{

};

int main()
{
    Employee Person_1;
    Person_1.setInfo(12829,653,"Tom Lawton","Male");
    Person_1.printInfo();

    Manager Person_2;
    Person_2.setInfo(17365,653,"Sarah Harisson","Female");
    Person_2.printInfo();
}