//
// Created by Bibek Gnawali on 28/07/2026.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>

using namespace std;

class Account {
private:
    static inline int static_account_id= 1;
    int account_id;
    float balance;
public:
    explicit Account(float _balance);
    [[nodiscard]] float getBalance() const;
    [[nodiscard]] bool deposit(float _amount);

    void setNib(int _bankId, int _clientId, int _accountId);
    [[nodiscard]] bool validateNib(string nib);
    [[nodiscard]] int sumDigits(const string& str);

    virtual void printAccount();

    virtual ~Account() = default;
};



#endif //ACCOUNT_H
