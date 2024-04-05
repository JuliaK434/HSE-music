#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include "artist.h"
#include "song.h"
#include "person.h"

class Album : public Song {
private:
	string album_title;
	int num_songs;

public:
	Album() {
		album_title = "None";
		num_songs = 0;
	}
	Album(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, string& title, int duration, int yearWriting, string& album_title, int num_songs)
		:Song(name, age, gender, pseudonym, numberAuditions, title, duration, yearWriting) {
		this->album_title = album_title;
		this->num_songs = num_songs;
	}

	string getAlbum_Title() {
		return album_title;
	}

	void setAlbum_Title(string& album_title) {
		this->album_title = album_title;
	}

	int getNum_songs() {
		return num_songs;
	}

	void setNum_songs(int num_songs) {
		this->num_songs = num_songs;
	}
};

#endif //SONG_H
