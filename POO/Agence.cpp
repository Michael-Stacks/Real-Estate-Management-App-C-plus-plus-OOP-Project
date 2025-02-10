#include "Agence.h"
#include <iostream>

void Agence::ajouterBienImmobilier(std::unique_ptr<BienImmobilier> bien) {
    biensImmobilier.push_back(std::move(bien));
}

void Agence::supprimerBienImmobilier(int id) {
    auto it = std::find_if(biensImmobilier.begin(), biensImmobilier.end(), [id](const std::unique_ptr<BienImmobilier>& bien) {
        return bien->getId() == id;
        });

    if (it != biensImmobilier.end()) {
        biensImmobilier.erase(it);
    }
    else {
        std::cout << "Le bien immobilier avec l'ID " << id << " n'a pas été trouvé." << std::endl;
    }
}

void Agence::ajouterPersonne(std::unique_ptr<Personne> personne) {
    personnes.push_back(std::move(personne));
}

void Agence::supprimerPersonne(const std::string& nom) {
    auto it = std::find_if(personnes.begin(), personnes.end(), [nom](const std::unique_ptr<Personne>& p) {
        return p->getNom() == nom;
        });

    if (it != personnes.end()) {
        personnes.erase(it);
    }
    else {
        std::cout << "La personne avec le nom " << nom << " n'a pas été trouvée." << std::endl;
    }
}

