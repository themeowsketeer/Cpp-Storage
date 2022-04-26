#include <iostream>
#include <cstring>

using namespace std;
class Person
{
    private:
        string name;
        int yearOfBirth;
        int id=0;
    public:
        Person() // Empty constructor which sets default values to data members in default object
        {
            this->name = "Peter";
            this->yearOfBirth = 2000;
            id++;
        }
        Person(string name, int year) // Constructor which sets new values to data members of a new object
        {
            this->name = name;
            this->yearOfBirth = year;
            id++;
        }
        void printInfo() // Print values of data members of the object
        {
            cout << id << ") Name and year of birth" << endl;
            cout << this->name << "\t" << this->yearOfBirth << endl;
        }
        ~Person() // Deconstructor wiping out information after works done
        {
            cout << "Deleting the information" << endl;
        }
        bool checkName(const Person &obj) // Check if 2 objects share same value of data member name
        {
            bool result = false;
            if (this->name == obj.name)
            {
                return result = true;
            }
            else { return result; }
        }
        bool checkYear(const Person &obj) // Check if 2 objects share same value of data member yearOfBirth
        {
            bool result = false;
            if (this->yearOfBirth == obj.yearOfBirth)
            {
                return result = true;
            }
            else { return result; }
        }
};

int main()
{
    Person number_1;
    Person number_2("Tom",2002);
    Person number_3("Floyd",2002);

    number_1.printInfo();
    number_2.printInfo();
    number_3.printInfo();

    cout << "Share same name ? --> "<< number_1.checkName(number_2) << endl;
    cout << "Share same year ? --> "<< number_1.checkYear(number_2) << endl;

    return 0;
}