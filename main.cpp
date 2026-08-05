#include <iostream>
#include "Account.h"

using namespace std;
int main() {
    Account* account = new Account(1000, 10000);
    Account* account2 = new Account(1000, 10000);
    account->printAccount();
    account2->printAccount();

    return 0;
}