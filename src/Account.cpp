#include "Account.h"

Account::Account()
{
    //ctor
}

Account::Account(string name, string id)
{
    this->full_name = name;
    this->accnt_id = id;
}
string Account::get_full_name()
{
    return full_name;
}
string Account::get_id()
{
    return accnt_id;
}
void Account::set_full_name(string name)
{
    this->full_name = name;
}
void Account::set_account_id(string id)
{
    this->accnt_id = id;
}
void Account::display()
{
    cout << full_name << " " << accnt_id;
}
