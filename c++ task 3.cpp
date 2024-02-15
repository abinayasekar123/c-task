#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    Book(string title, string author, int publicationYear) {
        this->title = title;
        this->author = author;
        this->publicationYear = publicationYear;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() const {
        cout << "Library Books:" << endl;
        for (const auto& book : books)
		 {
            cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", Year: " << book.getPublicationYear() << endl;
        }
    }
};
int main()
{
    Library library;
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    Book book3("1984", "George Orwell", 1949);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.displayBooks();

    return 0;
}

