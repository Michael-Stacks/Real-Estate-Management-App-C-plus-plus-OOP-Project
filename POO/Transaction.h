#pragma once

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
protected:
    int idTransaction;
    double montant;
    std::string dateTransaction;
    bool estEffectuee;

public:
    Transaction(int _idTransaction, double _montant, std::string _dateTransaction);
    void effectuerTransaction();
};

#endif // TRANSACTION_H
