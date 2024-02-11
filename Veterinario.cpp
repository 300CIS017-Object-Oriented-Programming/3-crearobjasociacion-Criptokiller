#include "Veterinario.h"
#include "Perro.h"
#include "Propietario.h"

Veterinario :: Veterinario(){}

Veterinario :: Veterinario(string name, int vetYearsExperience) : vetName(name), experience(vetYearsExperience){}

void Veterinario :: setVetName(string vetName){
    this->vetName = vetName;
}

void Veterinario :: setYearExperience(int years){
    experience = years;
}

string Veterinario :: getVetName(){
    return vetName;
}

int Veterinario :: getYearExperience(){
    return experience;
}