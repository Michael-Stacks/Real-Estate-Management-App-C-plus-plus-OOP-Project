#pragma once

#ifndef PROPRIETAIRE_H
#define PROPRIETAIRE_H

#include "Personne.h"

class Proprietaire : public Personne {
public:
    Proprietaire(std::string _nom, std::string _adresse, std::string _telephone);
};

#endif // PROPRIETAIRE_H
