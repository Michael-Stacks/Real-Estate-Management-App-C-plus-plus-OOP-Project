#pragma once

#ifndef MAISON_H
#define MAISON_H

#include "Appartement.h"
#include "BienImmobilier.h"
#include <iostream>

class Maison : public BienImmobilier {
private:
    int nombreChambres;

public:
    Maison(int _id, std::string _adresse, double _surface, std::string _statut, int _nombreChambres);
    void afficherDetails() override;
    void afficherDetailsSpecifiques() override; // Déclaration de la méthode redéfinie
    double getSurface() const; 

};

// Surcharges de la fonction comparerSurface pour la comparaison entre différents types
template<typename T, typename U>
bool comparerSurface(const T& obj1, const U& obj2) {
    return obj1.getSurface() < obj2.getSurface();
}


#endif // MAISON_H
