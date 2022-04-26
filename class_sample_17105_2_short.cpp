#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//Create a class called Book
class Book
{
    private://Member attributes must be accessed in the class scope itself
    //Define its attributes
    string title;
    string author;
    string genre;
    const double price=0.0;
    
    public: //Member functions are free to be accessed in any scopes
    //Define its methods
    Book (); //Provide a constructor
    Book(const string &, const string &, const string &, double); //Alternative member definition constructor
    inline void print(); //Inline function member 

    ~Book ()
    {
        cout << "deleting object in class Book..." << endl;
    }

};  
    Book::Book () {} //Default constructor for Book
    //Member initialization list used to set data members 
    Book::Book(const string &name, const string &writer, const string &type, double cost) : 
    author(writer),title(name),price(cost),genre(type) {}

inline void Book::print()
{
    cout<<"Book's title: "<<this->title<<endl;
    cout<<"Book's author: "<<this->author<<endl;
    cout<<"Book's category: "<<this->genre<<endl;
    cout<<"Book's price: "<<fixed<<setprecision(1)<<this->price<<endl;
}

int main()
{
    //Create a specific object of class Book
    Book java101("Java Programming","Surbhi Kakar","Computer",30.0);

    //Print book's details
    java101.print();

    return 0;
}
//string &get_author () { return this->author; } //Access private attribute legally from member function
    
    //string &get_title () { return this->title; } //Construct function prototypes
    //string &get_genre () { return this->genre; }
    //double get_price () { return this->price; }

    //Set up a new price for the book through inline function
    //java101.set_price_sale(30.0);
    // Inline function definition
//inline void Book::set_price_sale(double percent)
//{
//    this->price -= this->price * (percent / 100.0);
//}