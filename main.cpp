/*

Nombre: Daniel Felipe Barrera Zapata
Código: 8983498
Profesor: Gonzalo Noreña 
Fecha: 10/02/2024

*/

#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"

int main() {

    int i = 0;

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout << "El nombre del pPropietario del perro "<< firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<< endl;


    Perro* Max = new Perro("Max", 7, "Husky", "White and black", "Big");
    Perro* Katy = new Perro("Katy", 3, "", "Brown", "Big");
    Perro* Caliman = new Perro();
    Veterinario* vet1 = new Veterinario("Alfredo", 8);
    Veterinario* vet2 = new Veterinario();
    Veterinario* vet3 = new Veterinario();
    Propietario* owner = new Propietario();
    Propietario* owner2 = new Propietario();
    Breed* breed = new Breed();
    Breed* breed2 = new Breed();
    Breed* breed3 = new Breed();
    
    
    Max->agregarPropietario("Daniel", "8291492");
    Max->getPropietario()->setOwnerAge(17);
    Max->setVeterinario(vet1);

    Katy->setPropietario(owner2);
    Katy->getPropietario()->setNombre("Lina");
    Katy->getPropietario()->setOwnerAge(19);
    Katy->getPropietario()->setOwnerIdentity("81939154");
    Katy->setVeterinario(vet2);
    Katy->getVet()->setVetName("Manuel");
    Katy->getVet()->setYearExperience(5);
    Katy->setBreed(breed2);
    Katy->getBreed()->setBDogName("Maltes");
    Katy->getBreed()->setDogCountry("Italia");

    Caliman->setNombre("Caliman");
    Caliman->setPropietario(owner);
    Caliman->getPropietario()->setNombre("Diego");
    Caliman->getPropietario()->setOwnerAge(19);
    Caliman->getPropietario()->setOwnerIdentity("9103851");
    Caliman->setVeterinario(vet3);
    Caliman->getVet()->setVetName("Andrea");
    Caliman->getVet()->setYearExperience(10);
    Caliman->setBreed(breed3);
    Caliman->getBreed()->setBDogName("Mastin Napolitano");
    Caliman->getBreed()->setDogCountry("Italia");
    

    cout << "The owner name from the dog " << Max->getNombre() << " is " << Max->getPropietario()->getNombre() << endl;
    cout << "The ID from the owner " << Max->getPropietario()->getNombre() << " is " << Max->getPropietario()->getID() << endl;
    cout << "The age from the owner " << Max->getPropietario()->getNombre() << " is  " <<Max->getPropietario()->getOwnerAge() << endl;

    cout << "Max is barking ";
    Max->ladrar();


    Propietario* Hernando = new Propietario();

    Hernando->setNombre("Hernando");
    Hernando->setOwnerIdentity("118391409");
    Hernando->setOwnerAge(45);

    vector<string> showInfo = Hernando->mostrarInfo();

    
    cout << "The Owner name is " << showInfo[i] << " the ID number from the owner is " << showInfo[i + 1] << " the owner age is " << showInfo[i + 2] << endl;
    cout << "The dog " << Max->getNombre() << " Has the next vet" << endl << "The vet name is " << Max->getVet()->getVetName() << " and he has " << Max->getVet()->getYearExperience() << " years of experience" << endl;

    //Probando la clase Raza

    cout << "The dog " << Katy->getNombre() << " has the owner " << Katy->getPropietario()->getNombre() << " his vet is " << Katy->getVet()->getVetName()
    << " the vet has " << Katy->getVet()->getYearExperience() << " years of experience. " << endl << Katy->getNombre() << " his breed is "
    << Katy->getBreed()->getBDogName() << " and the breed comes from " << Katy->getBreed()->getDogCountry() << endl; 

    cout << "The dog " << Caliman->getNombre() << " has the owner " << Caliman->getPropietario()->getNombre() << " his vet is " << Caliman->getVet()->getVetName()
    << " the vet has " << Caliman->getVet()->getYearExperience() << " years of experience. " << endl << Caliman->getNombre() << " his breed is "
    << Caliman->getBreed()->getBDogName() << " and the breed comes from " << Caliman->getBreed()->getDogCountry() << endl; 
    


    return 0;
}
