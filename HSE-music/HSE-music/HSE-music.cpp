#include <iostream>
#include "person.h"
#include "artist.h"
#include "song.h"
//#include "band.h"
#include "genre.h"
int main() {
	string name("Egor");
	int age = 30;
	string sex("male");
	string name2("Egor Kreed");
	Artist Egor(name, age, sex, name2, 15000);
	cout << Egor.getPseudonym() << endl;
	Person Vlad(name, age, sex);
	cout << Vlad<<endl;
	string song("Alarm");
	Song Alarm(name, age, sex, name2, 15000, song, 5, 2015);
	cout << Alarm << endl;
	string alb_title("super");
	string genre_type("Rock");
	string instrument("Guitar");
	Genre Rock(name, age, sex, name2, 15000, song, 5, 2015, genre_type, instrument);
	cout << Rock << endl;
}
