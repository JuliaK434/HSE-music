#include "genre.h"

Genre::Genre() {
	genre_type = "None";
	instrument = "None";
}
Genre::Genre(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, int duration, int yearWriting, string& genre_type, string& instrument)
	:Song(name, age, gender, pseudonym, numberAuditions, title, duration, yearWriting) {
	this->genre_type = genre_type;
	this->instrument = instrument;
}
Genre::~Genre() {};
string Genre::getGenre_type() {
	return genre_type;
}
void Genre::setGenre_type(string& genre_type) {
	this->genre_type = genre_type;
}
string Genre::getInstrument() {
	return instrument;
}
void Genre::setInstrument(int instrument) {
	this->instrument = instrument;
}
