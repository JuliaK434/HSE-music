#ifndef ALBUM_H
#define ALBUM_H

#include <iostream>
#include <vector>
#include"song.h"

class Album {
private:
    string nameA;
    vector<Song> songs;
public:
    Album(string nameA);
    Album& operator+(const Song& song) {
        songs.push_back(song);
        return *this;
    }
    inline friend ostream& operator<<(ostream& os, const Album& a);
};
ostream& operator<<(ostream& os, const Album& a) {
    os << "Album: " << a.nameA << "\nSongs:\n";
    for (const auto& song : a.songs) {
        os << "\t- " << song << "\n";
    }
    return os;
}

#endif //ALBUM_H
