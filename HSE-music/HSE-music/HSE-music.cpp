#include <iostream>
#include "person.h"
#include "artist.h"
#include "song.h"
#include "band.h"
#include "genre.h"
#include "album.h"

int main() {
	string name("Egor Bulatkin");
	string title("TOP 10 EGOR KREED");
	int age = 29;
	string gender("male");
	string pseudonim("Egor Kreed");
	Artist Egor(name, age, gender, pseudonim, 4500000);
	cout << Egor.getPseudonym() << endl;
	Person EgorK(name, age, gender);
	cout << EgorK << endl;
	Band EK(name, age, gender, pseudonim, 4500000, 2011, 0);
	cout << "Band: " << EK << endl;
	string song1("LAMBO URUS");
	string song2("PUSSY BOY");
	string song3("ALARM");
	string song4("WE GOT GET LOVE");
	string song5("TARO");
	Song LAMBOURUS(name, age, gender, pseudonim, 4500000, song1, 2.28, 2021);
	Song PUSSYBOY(name, age, gender, pseudonim, 4500000, song2, 2.12, 2021);
	Song ALARM(name, age, gender, pseudonim, 4500000, song3, 3.24, 2015);
	Song WEGOTGETLOVE(name, age, gender, pseudonim, 4500000, song4, 2.14, 2022);
	Song TARO(name, age, gender, pseudonim, 4500000, song5, 3.20, 2023);
	cout << LAMBOURUS << endl;
	cout << PUSSYBOY << endl;
	string alb_title("TOP 5: EGOR KREED");
	string genre_type("Disko pop");
	string instrument("Computer music");
	Genre DISCOPOP(name, age, gender, pseudonim, 4500000, song1, 5, 2015, genre_type, instrument);
	cout << DISCOPOP << endl;
	Album Hit(title);
	Hit + LAMBOURUS + PUSSYBOY + ALARM + WEGOTGETLOVE + TARO;
	cout << Hit;
}
