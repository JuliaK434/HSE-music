#ifndef GENRE_H
#define GENRE_H
#include <iostream>
#include "artist.h"
#include "song.h"

class Genre : public Song {
private:
	string genre_type;
	string instrument;

public:
	Genre();
	Genre(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, int duration, int yearWriting, string& genre_type, string& instrument);
	string getGenre_type();
	void setGenre_type(string& genre_type);
	string getInstrument();
	void setInstrument(int instrument);
	inline friend ostream& operator<<(ostream& os, const Genre& g);
};
ostream& operator<<(ostream& os, const Genre& g) {
	os << "Genre: " << g.genre_type;
	return os;
}

#endif //GENRE_H
