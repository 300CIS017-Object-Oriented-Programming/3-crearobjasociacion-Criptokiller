//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <vector>

using namespace std;

class Propietario {
private:
    string nombre;
    string docIdentidad;
    int propietarioEdad;
public:
    Propietario(); //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre);
    Propietario(string nombre, string docIdentidad);
    
    void setNombre(string name);
    void setOwnerIdentity(string ID);
    void setOwnerAge(int ownerAge);
    string getNombre();
    string getID();
    int getOwnerAge();
    vector <string> mostrarInfo();

    /*

    El metodo agregar propietario que se encuentra en Perro.cpp lo que está haciendo es creando un nuevo objeto
    de la clase Propietario junto con sus parametros y le asigna la dirección de memoria al objeto de pPropietario.
    */
    



};


#endif //PROPIETARIO_H
