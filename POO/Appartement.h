#pragma once

#ifndef APPARTEMENT_H
#define APPARTEMENT_H

#include "BienImmobilier.h"

class Appartement : public BienImmobilier {
private:
    int nombrePieces;

public:
    Appartement(int _id, std::string _adresse, double _surface, std::string _statut, int _nombrePieces);
    void afficherDetails() override;
    void afficherDetailsSpecifiques() override; // Déclaration de la méthode redéfinie
    double getSurface() const;
};



#endif // APPARTEMENT_H
