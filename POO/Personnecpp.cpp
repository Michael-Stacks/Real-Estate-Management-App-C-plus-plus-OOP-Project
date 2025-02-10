#include "Personne.h"
#include <iostream>

Personne::Personne(std::string _nom, std::string _adresse, std::string _telephone)
    : nom(_nom), adresse(_adresse), telephone(_telephone) {}

void Personne::afficherInfos() {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Telephone: " << telephone << std::endl;
}
