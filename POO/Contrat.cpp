#include "Contrat.h"
#include <iostream>

Contrat::Contrat(int _idContrat, std::string _date, std::string _typeContrat, std::string _termesContrat)
    : idContrat(_idContrat), date(_date), typeContrat(_typeContrat), termesContrat(_termesContrat), estSigne(false) {}

void Contrat::afficherContrat() {
    std::cout << "ID du contrat: " << idContrat << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "Type de contrat: " << typeContrat << std::endl;
    std::cout << "Termes du contrat: " << termesContrat << std::endl;
    std::cout << "Contrat signe: " << (estSigne ? "Oui" : "Non") << std::endl;
}

void Contrat::signerContrat() {
    try {
        // Vérifie si le contrat est déjà signé
        if (estSigne) {
            throw std::runtime_error("Impossible de signer le contrat : il est deja signe.");
        }

        // Code pour signer le contrat (exemple : mise à jour de l'attribut estSigne à true)
        estSigne = true;

        std::cout << "Contrat signe avec succes." << std::endl;
    }
    catch (const std::runtime_error& e) {
        // Gérer l'exception ici
        std::cerr << "Erreur lors de la signature du contrat : " << e.what() << std::endl;
    }
}
