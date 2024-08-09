//Assignment -> Define a Book class with a constructor to initialise its properties(title, author, year, price) and a method displayInfo

//Using public access modifier

#include<iostream>
using namespace std;

class Book{

    public:
    string title;
    string author;
    int year;
    int price;

    Book(){
        cout << "Book Information" << endl;    
    }
    Book(string titl, string auth, int yr, int pr){
        title = titl;
        author = auth;
        year = yr;
        price = pr;
    }

    void print(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;

    }
};

int main(){

    cout << "----------Book1 Information----------" << endl;

    Book b1("The Power of your subconscious mind", "Joseph Murphy", 1963, 200);
    b1.title = "The Power of your subconscious mind";
    b1.author = "Joseph Murphy";
    b1.year = 1963;
    b1.price = 200;
    b1.print();

    cout << "\n";

    cout << "----------Book2 Information----------" << endl;

    Book b2("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997, 225);
    b2.title = "Harry Potter and the Philosopher's Stone";
    b2.author = "J.K. Rowling";
    b2.year = 1997;
    b2.price = 225;
    b2.print();
} 

//Using private access modifier

#include<iostream>
using namespace std;

class Book{
    private:
    string title;
    string author;
    int year;
    int price;

    public:
    void setTitle(string titl){
        title = titl;
    }

    string getTitle(){
        return title;
    }


    void setAuthor(string auth){
        author = auth;
    }

    string getAuthor(){
        return author;
    }


    void setYear(int yr){
        year = yr;
    }

    int getYear(){
        return year;
    }


    void setPrice(int pr){
        price = pr;
    }

    int getPrice(){
        return price;
    }
};

int main(){

    Book b1;

    cout << "----------Book 1 Information----------" << endl;

    b1.setTitle("The Power of your subconscious mind");
    cout << "Title: " << b1.getTitle() << endl;

    b1.setAuthor("Joseph Murphy");
    cout << "Author: " << b1.getAuthor() << endl;
    
    b1.setYear(1963);
    cout << "Year: " << b1.getYear() << endl;

    b1.setPrice(200);
    cout << "Price: " << b1.getPrice() << endl;

    cout <<"\n";

    Book b2;

    cout << "----------Book 2 Information----------" << endl;

    b2.setTitle("Harry Potter and the Philosopher's Stone");
    cout << "Title: " << b2.getTitle() << endl;

    b2.setAuthor("J.K. Rowling");
    cout << "Author: " << b2.getAuthor() << endl;
    
    b2.setYear(1997);
    cout << "Year: " << b2.getYear() << endl;

    b2.setPrice(225);
    cout << "Price: " << b2.getPrice() << endl;

}

