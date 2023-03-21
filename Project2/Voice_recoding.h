#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Date.h"

using namespace std;

class Voice_recoding
{
protected:
	string speaker;
	int duration;
	Date recoding_date;
public:
	Voice_recoding();
	Voice_recoding(string speaker, int duration, Date recoding_date);

	void show() const;
};

