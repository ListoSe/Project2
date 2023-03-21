#pragma once
#include "Book.h"
#include "Voice_recoding.h"

class Talking_book : public Book, public Voice_recoding
{
protected:
	int Tapes;
public:
	Talking_book();
	Talking_book(Book B, Voice_recoding V, int Tapes);

	void show() const;
};