#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Create a class called Book
class Book
{
    private:
    
    string author;
    string title;
    string genre;
    double price;
    string date;
    string publisher;
    string description;
    
    public:
    
    string get_author ()
    {
        return author;
    }
    void set_author (string input)
    {
        author = input;
    }
    string get_title ()
    {
        return title;
    }
    void set_title (string input)
    {
        title = input;
    }
    string get_genre ()
    {
        return genre;
    }
    void set_genre (string input)
    {
        genre = input;
    }
    double get_price ()
    {
        return price;
    }
    void set_price (double input)
    {
        price = input;
    }
    string get_date ()
    {
        return date;
    }
    void set_date (string input)
    {
        date = input;
    }
    string get_publisher ()
    {
        return publisher;
    }
    void set_publisher (string input)
    {
        publisher = input;
    }
    string get_description ()
    {
        return description;
    }
    void set_description (string input)
    {
        description = input;
    }
};

int main()
{
    //Create a specific object of class Book
    Book java101;
    
    //Assign values its attributes
    java101.set_author("Surbhi Kakar");
    java101.set_title("Java Programming");
    java101.set_genre("Computer");
    java101.set_price(30.0);
    java101.set_date("2010-08-01");
    java101.set_publisher("Dream Tech Press");
    java101.set_description("A description here");
    
    //Print out attributes of the object in class Book
    cout<<"Book's title: "<<java101.get_title()<<endl;
    cout<<"Book's author: "<<java101.get_author()<<endl;
    cout<<"Book's genre: "<<java101.get_genre()<<endl;
    cout<<"Book's price: "<<fixed<<setprecision(1)<<java101.get_price()<<endl;
    cout<<"Book's date: "<<java101.get_date()<<endl;
    cout<<"Book's publisher: "<<java101.get_publisher()<<endl;
    cout<<"Book's description: "<<java101.get_description()<<endl;

    return 0;
}