#ifndef LIBRARY_H
#define LIBRARY_H

#include"Book.h"
#include<vector>

class Library {
	private:
		std::vector<Book> books;

	public:
		void addBook(Book&);
		bool removeBook(std::string&);
		bool borrowBook(std::string&);
		bool returnBook(std::string&);
		void printAllBooks();
};

void Library::addBook(Book& lib) {
	books.push_back(lib);
}

bool Library::removeBook(std::string& name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i].getName() == name) {
			books.erase(books.begin() + i);
			return true;
		}
	}
	std::cout << "There's no book named '" << name << "'" << std::endl;
	return false;	
}

bool Library::borrowBook(std::string& name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i].getName() == name) {
			books[i].setAvailability(false);
			return true;
		}
	}
	std::cout << "There's no book named '" << name << "'" << std::endl;
	return false;
}

bool Library::returnBook(std::string& name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i].getName() == name) {
			if (books[i].getAvailability() == true) {
				std::cout << "The book is available!";
				return true; 
			}
			else {
				books[i].setAvailability(true);
				std::cout << "The book has been returned. Thanks!!";
				return true;
			}
		}
	}
	std::cout << "There's no book named '" << name << "'" << std::endl;
	return false;
}

void Library::printAllBooks() {
	for (int i = 0; i < books.size(); i++) {
		std::cout << "Book name: " << books[i].getName() << ", Author: " << books[i].getAuthor() << "; Status: " << books[i].getAvailability() << std::endl;

	}
}


#endif // !LIBRARY_H

