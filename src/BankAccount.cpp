#include "BankAccount.h"

BankAccount::BankAccount()
{
    //ctor
}

BankAccount::BankAccount(string accnt_name, string accnt_id, string branch, string soc_sec_num, string accnt_type)
{
   set_full_name(accnt_name);
   set_account_id(accnt_id);
   this->branch_name = branch;
   this->soc_sec_num = soc_sec_num;
   this->accnt_type = accnt_type;
}

string BankAccount::get_branch_name()
{
    return branch_name;
}

string BankAccount::get_soc_sec_num()
{
    return soc_sec_num;
}

string BankAccount::get_accnt_type()
{
    return accnt_type;
}

void BankAccount::set_branch_name(string branch_name)
{
    this->branch_name = branch_name;
}

void BankAccount::set_soc_sec_num(string soc_sec_num)
{
    this->soc_sec_num = soc_sec_num;
}

void BankAccount::set_accnt_type(string accnt_type)
{
    this->accnt_type = accnt_type;
}

void BankAccount::display()
{
    cout << "Printing.......";

}
