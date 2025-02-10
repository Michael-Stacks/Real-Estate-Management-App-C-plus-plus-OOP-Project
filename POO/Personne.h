#pragma once

#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

class Personne {
protected:
    std::string nom;
    std::string adresse;
    std::string telephone;

public:
    Personne(std::string _nom, std::string _adresse, std::string _telephone);
    void afficherInfos();
    
    // Constructeur prenant le nom de la personne comme argument
    Personne(const std::string& _nom) : nom(_nom) {}

    // Méthode pour obtenir le nom de la personne
    std::string getNom() const { return nom; }

};

#endif // PERSONNE_H
