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
    ~Album();
    Album& operator+(const Song& song) {
        songs.push_back(song);
        return *this;
    }
    inline friend ostream& operator<<(ostream& os, const Album& a);
};
ostream& operator<<(ostream& os, const Album& a) {
    double dur = 0;
    int number_songs = 0;
    for (const auto& song : a.songs) {
        number_songs += 1;
        dur += song.duration;
    }
    os << "Album: " << a.nameA <<endl<<"Number of songs: "<<number_songs<<endl;
    os << "Duration of the album: "<< dur << endl;
    os<< "Songs:"<<endl;
    for (const auto& song : a.songs) {
        os << "\t- " << song << "\n";
    }
    return os;
}

#endif //ALBUM_H
