/*

Nombre: Daniel Felipe Barrera Zapata
Código: 8983498
Profesor: Gonzalo Noreña 
Fecha: 10/02/2024

*/

#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include <vector>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

using namespace std;

class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Breed* pBreed;
    

public:
    Perro();
    Perro(string dogName, int dogAge, string dogBreed, string dogColor, string dogSize);

    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    

    // Sirve para.......
    void agregarPropietario(string nombre, string docIdentidad);

    void setVeterinario(Veterinario* pVeterinario);
    void setBreed(Breed* pBreed);
    
    Veterinario* getVet();
    Breed* getBreed();
    
    
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);



    int getEdad();
    void setEdad(int edad);
    string getRaza();
    void setRaza(string raza);
    string getNombre();
    void setNombre(string nombre);
    string getTamanio();
    void setTamanio(string tamanio);
    string getColor();
    void setColor(string color);
    
    

};
#endif
