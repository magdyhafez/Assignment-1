#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
using namespace std;

class bankaccount
{

    private: string number;
            string name;
            double balance  ;
    public: bankaccount(string na ,string no ,double ba );
            double get_balance();
            string get_name();
            void set_balance(double b);
            void set_name(string a);
            void deposit(double  b);
            void withdraw(double  b);

};
bankaccount:: bankaccount(string na ,string no ,double ba )
 {
     name = na ; number=no ; balance =ba ;
 }
  double bankaccount::  get_balance()
  {
      return balance;
  }
 string bankaccount:: get_name()
  {
  return name ;
  }
 void bankaccount::  set_balance(double b)
  {
      balance=b ;
  }
  void bankaccount:: set_name(string a)
   {
       name=a;
   }
void bankaccount:: deposit(double  b)
{
balance=balance+b ;
}
 void bankaccount:: withdraw(double  b)
 {
     balance=balance-b;
 }
#endif // BANKACCOUNT_H
