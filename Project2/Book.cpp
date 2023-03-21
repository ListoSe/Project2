#include "Book.h"

Book::Book()
{
	author = "";
	edition = "";
	publication_date = Date();
}

Book::Book(string author, string edition, Date publication_date, long isbn)
{
	this->author = author;
	this->edition = edition;
	this->publication_date = publication_date;
	this->isbn = isbn;
}

void Book::show() const
{
	cout << "author: " << author << endl;
	cout << "edition: " << edition << endl;
	cout << "publication_date: " << publication_date << endl;
	cout << "isbn: " << isbn << endl;
}
