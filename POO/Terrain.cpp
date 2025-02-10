#include "Terrain.h"
#include <iostream>

Terrain::Terrain(int _id, std::string _adresse, double _surface, std::string _statut, std::string _typeTerrain)
    : BienImmobilier(_id, _adresse, _surface, "Terrain", _statut), typeTerrain(_typeTerrain) {}

void Terrain::afficherDetails() {
    BienImmobilier::afficherDetails();
    std::cout << "Type de terrain: " << typeTerrain << std::endl;
}
void Terrain::afficherDetailsSpecifiques() {
    std::cout << "Type de terrain : " << typeTerrain << std::endl;
}
