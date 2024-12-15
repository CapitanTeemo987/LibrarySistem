#include "Library.h"
#include<iostream>
#include<string>

void menu() {
	std::cout << "1. Add book" << std::endl;
	std::cout << "2. Remove book" << std::endl;
	std::cout << "3. Borrow book" << std::endl;
	std::cout << "4. Return book" << std::endl;
	std::cout << "5. Print all books" << std::endl;
	std::cout << "6. Exit" << std::endl;
}


int main() {
	Library myLibrary; 
	int choice;
	
	do {
		menu();
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {

		case 1: {
			std::string name, author;
			std::cout << "Enter book's name: ";
			std::cin.ignore();
			std::getline(std::cin, name);

			std::cout << "Enter author's name: ";
			std::cin.ignore();
			std::getline(std::cin, author);

			Book newBook(name, author, true);
			myLibrary.addBook(newBook);
			std::cout << "Book added successfully!\n";
			break;
		}

		case 2: {
			std::string name;
			std::cout << "Enter the book's name to remove: ";
			std::cin.ignore();
			std::getline(std::cin, name);

			if (myLibrary.removeBook(name)) {
				std::cout << "Book removed successfully\n";
			}
			break;
		}

		case 3: {
			std::string name;
			std::cout << "Enter the name of the book to borrow: ";
			std::cin.ignore();
			std::getline(std::cin, name);

			if (myLibrary.borrowBook(name)) {
				std::cout << "Book borrowed successfully!\n";
			}
			break;
		}

		case 4: {
			std::string name;
			std::cout << "Enter the name of the book to return: ";
			std::cin.ignore();
			std::getline(std::cin, name);

			if (myLibrary.returnBook(name)) {
				std::cout << "Book returned successfully!";
			}
			break;
		}

		case 5: {
			myLibrary.printAllBooks();
			break;
		}

		case 6: {
			std::cout << "Exiting program. Goodbye!\n";
			break;
		}

		default:
			std::cout << "Invalid choice. Please try again.\n";;
		}

	} while (choice != 6);

	return 0;
}