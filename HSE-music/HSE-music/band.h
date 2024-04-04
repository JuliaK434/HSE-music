#ifndef BAND_H
#define BAND_H

#include <iostream>
#include "artist.h"

class Band : public Artist {
private:
    int yearCreate;
    int yearBreakup;
public:
    Band() {
        yearCreate = 0;
        yearBreakup = 0;
    }
    Band(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, int yearCreate, int yearBreakup)
        :Artist(name, age, gender, pseudonym, numberAuditions) {
        this->yearCreate = yearCreate;
        this->yearBreakup = yearBreakup;
    }
    int getYearCreate() {
        return yearCreate;
    }
    void setYearCreate(int yearCreate) {
        this->yearCreate = yearCreate;
    }
    int getBreakup() {
        return yearBreakup;
    }
    void setYearCreate(int yearBreakup) {
        this->yearBreakup = yearBreakup;
    }
};

#endif //BAND_H
