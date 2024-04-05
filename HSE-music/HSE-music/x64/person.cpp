#include "person.h"

string Person::getName(){
        return name;
}
 void Person::setName(string& name){
     this->name = name;
    }
 int Person::getAge() {
     return age;
 }
 void Person::setAge(int age) {
     this->age = age;
 }
 string Person::getGender() {
     return gender;
 }
 void Person::setGender(string& gender) {
     this->gender = gender;
 }
 Person::Person() {
     name = "NO";
     age = 0;
     gender = "uncertain";
 }
 Person::Person(string& name, int& age, string& gender) {
     this->name = name;
     this->age = age;
     this->gender = gender;
 }