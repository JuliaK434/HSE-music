#ifndef BAND_H
#define BAND_H

#include <iostream>
#include "artist.h"

class Band : public Artist {
private:
    int yearCreate;
    int yearBreakup;
public:
    Band();
    Band(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, int yearCreate, int yearBreakup);
    ~Band();
    int getYearCreate();
    void setYearCreate(int yearCreate);
    int getBreakup();
    void setYearBreakup(int yearBreakup);

    inline friend ostream& operator<<(ostream& os, const Band& b);
};
ostream& operator<<(ostream& os, const Band& b) {
    os << "Start band: " << b.yearCreate << ", finish (present time 0): " << b.yearBreakup;
    return os;
}

#endif //BAND_H
