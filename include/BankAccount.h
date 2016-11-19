#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include "Account.h"

class BankAccount : public Account
{
    public:
        BankAccount();
        BankAccount(string accnt_name, string accnt_id, string branch, string soc_sec_num, string accnt_type);
        string get_branch_name();
        string get_soc_sec_num();
        string get_accnt_type();
        void set_branch_name(string branch_name);
        void set_soc_sec_num(string soc_sec_num);
        void set_accnt_type(string accnt_type);
        void display();
    private:
        string branch_name;
        string soc_sec_num;
        string accnt_type;
};

#endif // BANKACCOUNT_H
