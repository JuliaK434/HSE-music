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
	Genre() {
		genre_type = "None";
		instrument = "None";
	}
	Genre(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, int duration, int yearWriting, string&genre_type, string& instrument)
		:Song(name, age, gender, pseudonym, numberAuditions, title, duration, yearWriting) {
		this->genre_type = genre_type;
		this->instrument = instrument;
	}

	string getGenre_type() {
		return genre_type;
	}

	void setGenre_type(string& genre_type) {
		this->genre_type = genre_type;
	}

	string getInstrument() {
		return instrument;
	}

	void setInstrument(int instrument) {
		this->instrument = instrument;
	}
	friend ostream& operator<<(ostream& os, const Genre& g);
};

ostream& operator<<(ostream& os, const Genre& g) {
	os << "Genre: " << g.genre_type;
	return os;
}

#endif //GENRE_H
