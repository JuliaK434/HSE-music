#ifndef ARTIST_H
#define ARTIST_H

#include <iostream>
#include "person.h"

class Artist : public Person {
protected:
    string pseudonym;
    int numberAuditions;
public:
    Artist() {
        pseudonym = "NO";
        numberAuditions = 0;
    }
    Artist(string& name, int& age, string& gender, string& pseudonym, int numberAuditions)
        :Person(name, age, gender) {
        this->pseudonym = pseudonym;
        this->numberAuditions = numberAuditions;
    }
   
    virtual string getPseudonym() {
        return pseudonym;
    }
    void setPseudonym(string& pseudonym) {
        this->pseudonym = pseudonym;
    }
    int getNumberAuditions() {
        return numberAuditions;
    }
    void setNumberAuditions(int numberAuditions) {
        this->numberAuditions = numberAuditions;
    }
};

#endif //ARTIST_H
