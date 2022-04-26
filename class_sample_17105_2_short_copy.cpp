#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Create a class called Book
class Book
{
    private://Member attributes must be accessed in the class scope itself
    //Define its attributes
    string author;
    string title;
    string genre;
    const double price=0.0;
    static int stock; //Static data member
    
    public: //Member functions are free to be accessed in any scopes
    //Define its methods
    Book (); //Provide a constructor
    Book(const string &, const string &, const string &, double); //Alternative member definition constructor
    static int get_stock_left();
    void print() const; //Static function member 

    ~Book ()
    {
        cout << "deleting object in class Book..." << endl;
    }

};  
    //Initialize static data member
    int Book::stock = 0;

    //Define static function member
    inline int Book::get_stock_left() { return stock;}

    Book::Book () {} //Default constructor for Book
    //Member initialization list used to set data members 
    Book::Book(const string &name, const string &writer, const string &type, double cost) : 
    author(writer),title(name),genre(type),price(cost) { stock++; }

inline void Book::print() const
{
    cout<<"Book's title: "<<title<<endl;
    cout<<"Book's author: "<<author<<endl;
    cout<<"Book's genre: "<<genre<<endl;
    cout<<"Book's price: "<<price<<endl;
}

int main()
{
    //Create a specific object of class Book
    Book java101("Java Programming","Surbhi Kakar","Computer",30.0);

    //Print book's details
    java101.print();

    cout <<"Books left: "<< java101.get_stock_left() << endl;
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