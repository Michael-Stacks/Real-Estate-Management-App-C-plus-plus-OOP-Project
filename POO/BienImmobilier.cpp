#include "BienImmobilier.h"
#include <iostream>

BienImmobilier::BienImmobilier(int _id, std::string _adresse, double _surface, std::string _type, std::string _statut)
    : id(_id), adresse(_adresse), surface(_surface), type(_type), statut(_statut) {}

void BienImmobilier::afficherDetails() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Surface: " << surface << " m^2" << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Statut: " << statut << std::endl;
}

void BienImmobilier::mettreAJourStatut(std::string nouveauStatut) {
    statut = nouveauStatut;
}

void BienImmobilier::ajouterContrat(const Contrat& contrat) {
    contrats.push_back(contrat);
}

