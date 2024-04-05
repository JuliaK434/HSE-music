#include "song.h"

Song::Song() {
	duration = 0;
	yearWriting = 0;
}
Song::Song(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, double duration, int yearWriting)
	:Artist(name, age, gender, pseudonym, numberAuditions) {
	this->title = title;
	this->duration = duration;
	this->yearWriting = yearWriting;
}
string Song::getPseudonym() {
	return string("Song`s author: ") + pseudonym;
}
string Song::getTitle() {
	return title;
}
void Song::setTitle(string& title) {
	this->title = title;
}
double Song::getDuration() {
	return duration;
}
void Song::setDuration(double duration) {
	this->duration = duration;
}
int Song::getYearWriting() {
	return yearWriting;
}
void Song::setYearWriting(int yearWriting) {
	this->yearWriting = yearWriting;
}
