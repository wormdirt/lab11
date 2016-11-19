#include "Account.h"
#include "BankAccount.h"

using namespace std;

int main()
{
    Account my_accnt("Wes", "9999");
    BankAccount my_cnt("Wes", "999", "psosp", "noop", "pan");

    my_accnt.display();
    my_cnt.display();


    return 0;
}
