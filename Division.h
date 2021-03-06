#ifndef EXPRESSIONENGINE_DIVISION_H
#define EXPRESSIONENGINE_DIVISION_H
#include "ArithmeticExpression.h"

class Division: public ArithmeticExpression{
public:
    Division();
    Division(Expression *givenLeft, Expression *givenRight);
    virtual std::string evaluate ();
    virtual Expression *clone();
    virtual float convert (std::string s);
    virtual void print();

    virtual std::string to_string();
};

#endif //EXPRESSIONENGINE_DIVISION_H
