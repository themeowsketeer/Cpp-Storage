#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Create a class called Book
class Book
{
    public:
    string author;
    string title;
    string genre;
    double price;
    string date;
    string publisher;
    string description;
};

int main()
{
    //Create a specific member of class Book
    Book java101;
    
    //Initialize its attributes
    java101.author="Surbhi Kakar";
    java101.title="Java Programming";
    java101.genre="Computer";
    java101.price=30.0;
    java101.date="2010-08-01";
    java101.publisher="Dream Tech Press";
    java101.description="A description here";
    
    //Print out atributes of a member in class Book
    cout<<"Book's title: "<<java101.title<<endl;
    cout<<"Book's author: "<<java101.author<<endl;
    cout<<"Book's genre: "<<java101.genre<<endl;
    cout<<"Book's price: "<<fixed<<setprecision(1)<<java101.price<<endl;
    cout<<"Book's date: "<<java101.date<<endl;
    cout<<"Book's publisher: "<<java101.publisher<<endl;
    cout<<"Book's description: "<<java101.description<<endl;
    
    return 0;
}