#include "artist.h"

Artist::Artist() {
    pseudonym = "NO";
    numberAuditions = 0;
}
Artist::Artist(string& name, int& age, string& gender, string& pseudonym, int numberAuditions)
    :Person(name, age, gender) {
    this->pseudonym = pseudonym;
    this->numberAuditions = numberAuditions;
}
string Artist:: getPseudonym() {
    return pseudonym;
}
void Artist::setPseudonym(string& pseudonym) {
    this->pseudonym = pseudonym;
}
int Artist::getNumberAuditions() {
    return numberAuditions;
}
void Artist::setNumberAuditions(int numberAuditions) {
    this->numberAuditions = numberAuditions;
}