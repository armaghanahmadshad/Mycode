#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Book {
private:
    int id;
    string name;
    string author;
    int quantity;

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, name);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayBook() {
        cout << "\nBook ID: " << id;
        cout << "\nBook Name: " << name;
        cout << "\nAuthor: " << author;
        cout << "\nQuantity: " << quantity << endl;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    int getQuantity() {
        return quantity;
    }

    void issueBook() {
        if(quantity > 0) {
            quantity--;
            cout << "Book issued successfully!\n";
        }
        else {
            cout << "Book not available.\n";
        }
    }

    void returnBook() {
        quantity++;
        cout << "Book returned successfully!\n";
    }

    void updateBook() {
        cin.ignore();
        cout << "Enter New Book Name: ";
        getline(cin, name);

        cout << "Enter New Author Name: ";
        getline(cin, author);

        cout << "Enter New Quantity: ";
        cin >> quantity;
    }
};

vector<Book> books;

void saveToFile() {
    ofstream file("library.txt");

    for(auto &b : books) {
        file << b.getId() << endl;
        file << b.getName() << endl;
        file << b.getQuantity() << endl;
    }

    file.close();
}

void addBook() {
    Book b;
    b.addBook();
    books.push_back(b);
    saveToFile();
    cout << "Book added successfully!\n";
}

void displayBooks() {
    if(books.empty()) {
        cout << "No books available.\n";
        return;
    }

    for(auto &b : books) {
        b.displayBook();
    }
}

void searchBook() {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for(auto &b : books) {
        if(b.getId() == id) {
            b.displayBook();
            return;
        }
    }

    cout << "Book not found.\n";
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    for(auto &b : books) {
        if(b.getId() == id) {
            b.issueBook();
            saveToFile();
            return;
        }
    }

    cout << "Book not found.\n";
}

void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for(auto &b : books) {
        if(b.getId() == id) {
            b.returnBook();
            saveToFile();
            return;
        }
    }

    cout << "Book not found.\n";
}

void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    for(int i=0; i<books.size(); i++) {
        if(books[i].getId() == id) {
            books.erase(books.begin()+i);
            saveToFile();
            cout << "Book deleted successfully!\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

void updateBook() {
    int id;
    cout << "Enter Book ID to update: ";
    cin >> id;

    for(auto &b : books) {
        if(b.getId() == id) {
            b.updateBook();
            saveToFile();
            cout << "Book updated successfully!\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Update Book\n";
        cout << "8. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: deleteBook(); break;
            case 7: updateBook(); break;
            case 8: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 8);

    return 0;
}