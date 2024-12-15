#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>

class Book {
	private:
		std::string name;
		std::string author;
		bool isAvailable;

	public:
		Book();
		Book(std::string, std::string, bool);
		std::string getName();
		std::string getAuthor();
		bool getAvailability();
		void setAvailability(bool);
};

Book::Book() {
	name = "";
	author = "";
	isAvailable = true;
}

Book::Book(std::string name, std::string author, bool isAvailable) {
	this->name = name;
	this->author = author;
	this->isAvailable = isAvailable;
}

std::string Book::getName(){
	return name;
}

std::string Book::getAuthor() {
	return author;
}

bool Book::getAvailability() {
	return isAvailable;
}

void Book::setAvailability(bool isAv) {
	isAvailable = isAv;
}


#endif // !LIBRO_H
