#ifndef ARTIST_H
#define ARTIST_H

#include <iostream>
#include "person.h"

class Artist : public Person {
protected:
    string pseudonym;
    int numberAuditions;
public:
    Artist();
    Artist(string& name, int& age, string& gender, string& pseudonym, int numberAuditions);
    ~Artist();
    virtual string getPseudonym();
    void setPseudonym(string& pseudonym);
    int getNumberAuditions();
    void setNumberAuditions(int numberAuditions);
};

#endif //ARTIST_H
