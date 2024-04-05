#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;
public:
    Person();
    Person(string& name, int& age, string& gender);
    string getName();
    void setName(string& name);
    int getAge();
    void setAge(int age);
    string getGender();
    void setGender(string& gender);

    inline friend ostream& operator<<(ostream& os, const Person& p);
};
ostream& operator<<(ostream& os, const Person& p) {
    os << "Real name: " << p.name;
    return os;
}
#endif //PERSON_H
