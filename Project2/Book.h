#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Date.h"

using namespace std;

class Book
{
protected:
	string author;
	string edition;
	Date publication_date;
	long isbn;
public:
	Book();
	Book(string author, string edition, Date publication_date, long isbn);
	
	void show() const;
};

