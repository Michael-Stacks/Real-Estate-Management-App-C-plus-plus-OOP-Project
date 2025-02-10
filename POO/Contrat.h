#pragma once

#ifndef CONTRAT_H
#define CONTRAT_H

#include <string>

class Contrat {
protected:
    int idContrat;
    std::string date;
    std::string typeContrat;
    std::string termesContrat;
    bool estSigne;

public:
    Contrat(int _idContrat, std::string _date, std::string _typeContrat, std::string _termesContrat);
    void afficherContrat();
    void signerContrat();
};

#endif // CONTRAT_H
