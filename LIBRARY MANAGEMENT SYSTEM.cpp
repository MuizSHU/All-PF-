#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalBooks = 100; 
    int borrowedBooks = 0; 
    string command;

    cout << "Welcome to the Library Management System!\n";
    cout << "Total books available: " << totalBooks << "\n";

    while (true) 
	{
        cout << "\nOptions:\n";
        cout << "1. Enter 'borrow' to borrow a book.\n";
        cout << "2. Enter 'return' to return a book.\n";
        cout << "3. Enter 'stop' to stop the system.\n";
        cout << "Your choice: ";
        cin >> command;

        if (command == "stop") 
		{
            cout << "System shutting down. Goodbye!\n";
            break;
        }

        if (command == "borrow") 
		{
            if (borrowedBooks >= 2) 
			{
                cout << "You already have 2 books borrowed. Return one to borrow another.\n";
                continue;
            }
            if (totalBooks == 0) 
			{
                cout << "No books available in the library.\n";
                continue;
            }

            totalBooks--;
            borrowedBooks++;
            cout << "You borrowed a book. Books you currently have: " << borrowedBooks << "\n";
            cout << "Books remaining in the library: " << totalBooks << "\n";
            continue;
        }

        if (command == "return") {
            if (borrowedBooks == 0) {
                cout << "You have no books to return!\n";
                continue;
            }

            int daysLate;
            cout << "Enter the number of days you kept the book: ";
            cin >> daysLate;

            if (daysLate < 0) {
                cout << "Invalid input. Please enter a valid number of days.\n";
                continue;
            }

            int fine = 0;
            if (daysLate > 10) {
                fine = (daysLate - 10) * 5 + 5 * 2; 
            } else if (daysLate > 5) {
                fine = (daysLate - 5) * 2; 
            }

            totalBooks++;
            borrowedBooks--;
            cout << "You returned a book. Fine for late return: $" << fine << "\n";
            cout << "Books you currently have: " << borrowedBooks << "\n";
            cout << "Books remaining in the library: " << totalBooks << "\n";
            continue;
        }

        cout << "Invalid command! Please try again.\n";
    }

    return 0;
}