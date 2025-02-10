#pragma once

#ifndef BIENIMMOBILIER_H
#define BIENIMMOBILIER_H

#include <string>
#include "Contrat.h"
#include <vector>

class BienImmobilier {
protected:
    int id;
    std::string adresse;
    double surface;
    std::string type;
    std::string statut;

public:
    BienImmobilier(int _id, std::string _adresse, double _surface, std::string _type, std::string _statut);
    virtual void afficherDetails();
    void mettreAJourStatut(std::string nouveauStatut);
    virtual void afficherDetailsSpecifiques() = 0; // Déclaration de la méthode virtuelle pure
    void ajouterContrat(const Contrat& contrat); // Méthode pour ajouter un contrat
    int getId() const { return id; }

private:
    std::vector<Contrat> contrats; // Vecteur de contrats associés au bien immobilier
   
};


#endif // BIENIMMOBILIER_H
