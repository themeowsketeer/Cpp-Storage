#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Create a class called Book
class Cat
{
    private:
    
    string names[3];
    string color;
    int age;
    int count = 0 ;
    
    public:
    
    void print_names ()
    {
        cout << "All cat's names: "<< endl ;
        for ( int i = 0 ; i < count ; i++ )
        {
            cout << names[i] << endl;
        }
    }
    void add_names (string input)
    {
        names[count] = input;
        count++;
    }
    string get_color ()
    {
        return color;
    }
    void set_color (string input)
    {
        color = input;
    }
    int get_age ()
    {
        return age;
    }
    void set_age (int input)
    {
        age = input;
    }
};

int main()
{
    //Create a specific object of class Book
    Cat java101;
    string names[3]= { "Calico", "Scottish Land", "Tom" };
    //Assign values its attributes
    for (int i=0 ; i<2 ; i++ )
    {
        java101.add_names(names[i]);
    }
    java101.set_color("White");
    java101.set_age(7);
    
    //Print out attributes of the object in class Book
    java101.print_names();
    cout<<"Cat's color: "<<java101.get_color()<<endl;
    cout<<"Cat's age: "<<java101.get_age()<<endl;
    system("Pause");
    return 0;
}