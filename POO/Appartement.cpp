#include "Appartement.h"
#include <iostream>

Appartement::Appartement(int _id, std::string _adresse, double _surface, std::string _statut, int _nombrePieces)
    : BienImmobilier(_id, _adresse, _surface, "Appartement", _statut), nombrePieces(_nombrePieces) {}

void Appartement::afficherDetails() {
    BienImmobilier::afficherDetails();
    std::cout << "Nombre de pieces: " << nombrePieces << std::endl;
}
void Appartement::afficherDetailsSpecifiques() {
    std::cout << "Nombre de pieces : " << nombrePieces << std::endl;
}
double Appartement::getSurface() const {
    return surface;
}