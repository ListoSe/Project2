
#include "Talking_book.h"

Talking_book::Talking_book()
{
	Tapes = 0;
}

Talking_book::Talking_book(Book B, Voice_recoding V, int Tapes)
	:Book (B), Voice_recoding (V)
{
	this->Tapes = Tapes;
}

void Talking_book::show() const
{
	cout << endl;
	cout << "Tapes: " << Tapes << endl;
	Book::show();
	Voice_recoding::show();
}