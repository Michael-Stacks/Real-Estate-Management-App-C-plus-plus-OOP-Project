#include "Client.h"
#include<iostream>


Client::Client(std::string _nom, std::string _adresse, std::string _telephone)
    : Personne(_nom, _adresse, _telephone) {}

void Client::ajouterContrat(const Contrat& contrat) {
    contrats.push_back(contrat);
}
