#include "Voice_recoding.h"

Voice_recoding::Voice_recoding()
{
	speaker = "";
	duration = 0;
	recoding_date = Date();
}

Voice_recoding::Voice_recoding(string speaker, int duration, Date recoding_date)
{
	this->speaker = speaker;
	this->duration = duration;
	this->recoding_date = recoding_date;
}

void Voice_recoding::show() const
{
	cout << endl;
	cout << "speaker: " << speaker << endl;
	cout << "duration: " << duration << endl;
	cout << "recoding_date: " << recoding_date << endl;
}
