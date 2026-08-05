//
// Created by Bibek Gnawali on 28/07/2026.
//

#ifndef CLIENT_H
#define CLIENT_H

#include <__fwd/string.h>

#include "Account.h"
#include<string>

using namespace std;

class Client {
private:
    static int static_client_id;
    int client_id;
    string name;
    string phoneNum;
    Account* currentAccount;
    Account* savingAccount;
public:
    Client(Account* account);

};



#endif //CLIENT_H
