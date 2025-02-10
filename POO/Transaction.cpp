#include "Transaction.h"
#include <iostream>

Transaction::Transaction(int _idTransaction, double _montant, std::string _dateTransaction)
    : idTransaction(_idTransaction), montant(_montant), dateTransaction(_dateTransaction), estEffectuee(false) {}

void Transaction::effectuerTransaction() {
    try {
        // Vérifie si la transaction est déjà effectuée
        if (estEffectuee) {
            throw std::runtime_error("Impossible d'effectuer la transaction : elle est deja effectuee.");
        }

        // Code pour effectuer la transaction (exemple : mise à jour de l'attribut estEffectuee à true)
        estEffectuee = true;

        std::cout << "Transaction effectuee avec succes." << std::endl;
    }
    catch (const std::runtime_error& e) {
        // Gérer l'exception ici
        std::cerr << "Erreur lors de l'effectuation de la transaction : " << e.what() << std::endl;
    }
}
