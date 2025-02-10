#pragma once

#ifndef CLIENT_H
#define CLIENT_H

#include "Personne.h"
#include "Contrat.h"
#include <vector>

class Client : public Personne {
public:
    Client(std::string _nom, std::string _adresse, std::string _telephone);
    void ajouterContrat(const Contrat& contrat); // Méthode pour ajouter un contrat
  

private:
    std::vector<Contrat> contrats; // Vecteur de contrats associés au client
    
};

#endif // CLIENT_H
