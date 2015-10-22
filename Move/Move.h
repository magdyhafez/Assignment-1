#ifndef MOVE _H
#define MOVE _H
#include <iostream>
using namespace std ;

class Move
{
private:
double x;
double y;
public:
   void set_move(double a , double b );

    void reset_move(double a , double b );
};

#endif // MOVE _H

void Move::set_move(double a , double b )
{
x=a ;
x=b ;
}
void Move:: reset_move(double a , double b )
{
x=0 ;  y=0 ;
}
