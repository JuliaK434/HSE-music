#ifndef SONG_H
#define SONG_H

#include <iostream>
#include "artist.h"
#include "artist.h"
#include "person.h"

class Song : public Artist {
private:
	string title;
	int duration;
	int yearWriting;
public:
	Song() {
		duration = 0;
		yearWriting = 0;
	}
	Song(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, int duration, int yearWriting)
		:Artist(name, age, gender, pseudonym, numberAuditions) {
		this->title = title;
		this->duration = duration;
		this->yearWriting = yearWriting;
	}
	string getPseudonym() override {
		return string("Song`s author: ") + pseudonym;
	}
	string getTitle() {
		return title;
	}
	void setTitle(string& title) {
		this->title = title;
	}
	int getDuration() {
		return duration;
	}
	void setDuration(int duration) {
		this->duration = duration;
	}
	int getYearWriting() {
		return yearWriting;
	}
	void setYearWriting(int yearWriting) {
		this->yearWriting = yearWriting;
	}
	friend ostream& operator<<(ostream& os, const Song& s);
};
ostream& operator<<(ostream& os, const Song& s) {
	os << "Title: " << s.title << ", Performed by: " << s.pseudonym;
	return os;
}

#endif //SONG_H
