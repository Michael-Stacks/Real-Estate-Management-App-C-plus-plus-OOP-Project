#include "Maison.h"
#include <iostream>

Maison::Maison(int _id, std::string _adresse, double _surface, std::string _statut, int _nombreChambres)
    : BienImmobilier(_id, _adresse, _surface, "Maison", _statut), nombreChambres(_nombreChambres) {}

void Maison::afficherDetails() {
    BienImmobilier::afficherDetails();
    std::cout << "Nombre de chambres: " << nombreChambres << std::endl;
}
void Maison::afficherDetailsSpecifiques() {
    std::cout << "Nombre de chambres : " << nombreChambres << std::endl;
   
}
double Maison::getSurface() const {
    return surface;
}
