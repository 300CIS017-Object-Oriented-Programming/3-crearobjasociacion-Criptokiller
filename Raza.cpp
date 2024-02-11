#include "Raza.h"
#include <string>

using namespace std;

Breed :: Breed(){}

Breed :: Breed(string dogName, string country) : name(dogName), dogCountry(country){
    dogName = "";
    country = "";
}

void Breed :: setBDogName(string name){
    this->name = name;
}

void Breed :: setDogCountry(string country){
    dogCountry = country;
}

string Breed :: getBDogName(){
    return name;
}

string Breed :: getDogCountry(){
    return dogCountry;
}