#include <iostream>
#include <bankaccount.h>
using namespace std;

int main()
{
    bankaccount Magdy ("Magdy","AA09021993",5000); // creating object and initialize it
   string test_name=Magdy.get_name() ; // getting object name
   double test_balance=Magdy.get_balance() ; // getting object balance
   cout<<test_name<<endl<<test_balance<<endl;
   Magdy.deposit(1000.0);     // depositing
   cout<<Magdy.get_balance()<<endl;
   Magdy.withdraw(2000.0); // withdrawing
   cout<<Magdy.get_balance()<<endl;
   Magdy.set_balance(2000);          // set balance
   cout<<Magdy.get_balance()<<endl;
   Magdy.set_name("Magdy Hafez");    // set name
   cout<<Magdy.get_name()<<endl;

    return 0 ;
}
