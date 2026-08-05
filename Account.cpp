//
// Created by Bibek Gnawali on 28/07/2026.
//

#include "Account.h"

#include <iostream>
#include <__ostream/basic_ostream.h>

Account::Account(const float balance) {
    this->account_id = static_account_id++;
    this->balance = balance;
}

float Account::getBalance() const {
    return balance;
}

