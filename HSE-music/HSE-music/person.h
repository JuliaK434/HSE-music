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
    Person() {
        name = "NO";
        age = 0;
        gender = "uncertain";
    }
    Person(string& name, int& age, string& gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    string getName() {
        return name;
    }
    void setName(string& name) {
        this->name = name;
    }
    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }
    string getGender() { 
        return gender;
    }
    void setGender(string& gender) {
        this->gender = gender;
    }
    ostream& operator<<(ostream& os) {
        os << "Name: " << name;
        return os;
    }
};

#endif //PERSON_H