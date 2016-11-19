#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class Account
{
    public:
        Account();
        Account(string name, string id);
        string get_full_name();
        string get_id();
        void set_full_name(string name);
        void set_account_id(string id);
        void display();
    private:
        string full_name;
        string accnt_id;
};

#endif // ACCOUNT_H
