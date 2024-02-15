/*

Nombre: Daniel Felipe Barrera Zapata
Código: 8983498
Profesor: Gonzalo Noreña 
Fecha: 10/02/2024

*/


#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>

using namespace std;

class Veterinario{

    string vetName;
    int experience;


    public:

        Veterinario();
        Veterinario(string vetName, int vetExperience);

        void setVetName(string name);
        void setYearExperience(int years);
        string getVetName();
        int getYearExperience();

        

};

#endif