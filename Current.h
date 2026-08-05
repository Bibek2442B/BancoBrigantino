//
// Created by Bibek Gnawali on 04/08/2026.
//

#ifndef CURRENT_H
#define CURRENT_H

#include "Account.h"

class Current: public Account {
private:
    float creditLimit;
public:
    Current(float _balance, float _creditLimit);
    [[nodiscard]] bool withdraw(float _amount);

};



#endif //CURRENT_H
