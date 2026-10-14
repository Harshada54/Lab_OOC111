#include <iostream>
#include <string>
using namespace std;

// =====================================
// Book Class
// =====================================
class Book
{
public:
    int bookId;
    string title;
    string author;

    // Default Constructor
    Book()
    {
        bookId = 0;
        title = "";
        author = "";
    }

    // Parameterized Constructor
    Book(int id, string t, string a)
    {
        bookId = id;
        title = t;
        author = a;
    }

    // Display Book
    void displayBook()
    {
        cout << "\nBook ID    : " << bookId;
        cout << "\nTitle      : " << title;
        cout << "\nAuthor     : " << author;
        cout << "\n-------------------------";
    }
};


// =====================================
// Library Class
// =====================================
class Library
{
public:
    Book books[100];
    int count;

    // Constructor
    Library()
    {
        count = 0;
    }

    // Register Book
    void registerBook()
    {
        int id;
        string title, author;

        cout << "\nEnter Book ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        // Create Book using parameterized constructor
        books[count] = Book(id, title, author);

        count++;

        cout << "\nBook registered successfully!";
    }

    // Display Books
    void displayBooks()
    {
        if (count == 0)
        {
            cout << "\nNo books available!";
            return;
        }

        cout << "\n\n========== BOOK LIST ==========";

        for (int i = 0; i < count; i++)
        {
            books[i].displayBook();
        }
    }

    // Delete Book
    void deleteBook()
    {
        int id;
        int position = -1;

        cout << "\nEnter Book ID to delete: ";
        cin >> id;

        // Search for book
        for (int i = 0; i < count; i++)
        {
            if (books[i].bookId == id)
            {
                position = i;
                break;
            }
        }

        if (position == -1)
        {
            cout << "\nBook not found!";
            return;
        }

        // Shift books
        for (int i = position; i < count - 1; i++)
        {
            books[i] = books[i + 1];
        }

        count--;

        cout << "\nBook deleted successfully!";
    }
};


// =====================================
// Main Function
// =====================================
int main()
{
    // Library object
    Library library;

    int choice;

    do
    {
        cout << "\n\n==============================";
        cout << "\n   LIBRARY MANAGEMENT SYSTEM";
        cout << "\n==============================";
        cout << "\n1. Register Book";
        cout << "\n2. Display Books";
        cout << "\n3. Delete Book";
        cout << "\n4. Exit";
        cout << "\n==============================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            library.registerBook();
            break;

        case 2:
            library.displayBooks();
            break;

        case 3:
            library.deleteBook();
            break;

        case 4:
            cout << "\nThank you!";
            break;

        default:
            cout << "\nInvalid choice!";
        }

    } while (choice != 4);

    return 0;
}
