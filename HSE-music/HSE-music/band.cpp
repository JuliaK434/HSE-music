#include "band.h"

Band::Band() {
    yearCreate = 0;
    yearBreakup = 0;
}
Band::Band(string& name, int& age, string& gender, string& pseudonym, int numberAuditions, int yearCreate, int yearBreakup)
    :Artist(name, age, gender, pseudonym, numberAuditions) {
    this->yearCreate = yearCreate;
    this->yearBreakup = yearBreakup;
}
Band::~Band() {};
int Band::getYearCreate() {
    return yearCreate;
}
void Band::setYearCreate(int yearCreate) {
    this->yearCreate = yearCreate;
}
int Band::getBreakup() {
    return yearBreakup;
}
void Band::setYearBreakup(int yearBreakup) {
    this->yearBreakup = yearBreakup;
}
