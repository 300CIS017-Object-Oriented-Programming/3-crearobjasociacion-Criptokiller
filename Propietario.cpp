//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario :: Propietario(){}

Propietario::Propietario(string nombre, string docIdentidad) {
    this->nombre = nombre;
    this->docIdentidad = docIdentidad;
}

Propietario :: Propietario(string nombre){
    this->nombre = nombre;
}

void Propietario ::setNombre(string nombre) {
    this->nombre = nombre;
}

void Propietario :: setOwnerIdentity(string ID){
    docIdentidad = ID;
}

void Propietario :: setOwnerAge(int ownerAge){
    propietarioEdad = ownerAge;
}

string Propietario :: getNombre(){
    return nombre;
}

int Propietario :: getOwnerAge(){
    return propietarioEdad;
}

string Propietario :: getID(){
    return docIdentidad;
}

vector<string> Propietario :: mostrarInfo(){
    
    vector<string> information;

    string stringAge = to_string(propietarioEdad);

    information.push_back(nombre);
    information.push_back(docIdentidad);
    information.push_back(stringAge);

    return information;
}


