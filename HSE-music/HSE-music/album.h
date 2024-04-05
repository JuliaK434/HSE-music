#ifndef ALBUM_H
#define ALBUM_H

#include <iostream>
#include <vector>
#include <string>
#include"song.h"

class Album {
private:
    string name;
    vector<Song> songs;
public:
    
    Album(string name) : name(name) {}
    Album& operator+(const Song& song) {
        songs.push_back(song);
        return *this;
    }
    friend ostream& operator<<(ostream& os, const Album& a);
};

ostream& operator<<(ostream& os, const Album& a) {
    os << "Album: " << a.name << "\nSongs:\n";
    for (const auto& song : a.songs) {
        os << "\t- " << song << "\n";
    }
    return os;
}

#endif //ALBUM_H
