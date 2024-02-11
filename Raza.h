/*

Nombre: Daniel Felipe Barrera Zapata
Código: 8983498
Profesor: Gonzalo Noreña 
Fecha: 10/02/2024

*/

#ifndef RAZA_H
#define RAZA_H

#include <string>

using namespace std;

class Breed{

    string name;
    string dogCountry;

    public:
        Breed();
        Breed(string name, string country);

        void setBDogName(string dogName);
        void setDogCountry(string country);
        string getBDogName();
        string getDogCountry();
        


};



#endif