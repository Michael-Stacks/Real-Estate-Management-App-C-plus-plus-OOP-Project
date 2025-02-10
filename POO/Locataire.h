#pragma once

#ifndef LOCATAIRE_H
#define LOCATAIRE_H

#include "Personne.h"

class Locataire : public Personne {
public:
    Locataire(std::string _nom, std::string _adresse, std::string _telephone);
};

#endif // LOCATAIRE_H
