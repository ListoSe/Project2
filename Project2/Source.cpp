#include "Talking_book.h"

int main() {
	Book a("Nikita", "1234", Date(2007, 02, 13), 15);
	Voice_recoding b("Nik", 24, Date(2007, 02, 15));
	Talking_book c(a, b, 3);

	//a.show();
	//b.show();
	c.show();
}