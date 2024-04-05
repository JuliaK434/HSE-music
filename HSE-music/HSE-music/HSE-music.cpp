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
	int age = 30;
	string gender("male");
	string pseudonim("Egor Kreed");
	Artist Egor(name, age, gender, pseudonim, 4500000);
	cout << Egor.getPseudonym() << endl;
	Person EgorK(name, age, gender);
	cout << EgorK << endl;
	string song1("LAMBO URUS");
	string song2("PUSSY BOY");
	Song LAMBOURUS(name, age, gender, pseudonim, 4500000, song1, 2.28, 2021);
	Song PUSSYBOY(name, age, gender, pseudonim, 4500000, song2, 2.12, 2021);
	cout << LAMBOURUS << endl;
	cout << PUSSYBOY << endl;
	string alb_title("TOP 10 EGOR KREED");
	string genre_type("Disko pop");
	string instrument("Computer music");
	Genre DISCOPOP(name, age, gender, pseudonim, 4500000, song1, 5, 2015, genre_type, instrument);
	cout << DISCOPOP << endl;
	Album Hit(title);
	Hit + LAMBOURUS+PUSSYBOY;
	cout << Hit;
}
