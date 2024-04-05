#ifndef SONG_H
#define SONG_H

#include <iostream>
#include "artist.h"
#include "artist.h"
#include "person.h"

class Song : public Artist {
protected:
	string title;
	int yearWriting;
public:
	double duration;
	Song();
	Song(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, double duration, int yearWriting);
	~Song();
	string getPseudonym() override;
	string getTitle();
	void setTitle(string& title);
	double getDuration();
	void setDuration(double duration);
	int getYearWriting();
	void setYearWriting(int yearWriting);
	inline friend ostream& operator<<(ostream& os, const Song& s);
};
ostream& operator<<(ostream& os, const Song& s) {
	os << "Title: " << s.title << ", Performed by: " << s.pseudonym << ", Duration: " << s.duration << ", Year writing: " << s.yearWriting;
	return os;
}

#endif //SONG_H
