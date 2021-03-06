//
// Created by ryan on 02/12/15.
//

#ifndef EXPRESSIONENGINE_MULTIPLICATIONEXPRESSION_H
#define EXPRESSIONENGINE_MULTIPLICATIONEXPRESSION_H

#include "ArithmeticExpression.h"

class Multiplication : public ArithmeticExpression{
public:
    Multiplication();
    Multiplication(Expression *givenLeft, Expression *givenRight);
    virtual std::string evaluate ();
    virtual Expression *clone();
    virtual float convert (std::string s);
    virtual void print();

    virtual std::string to_string();
};


#endif //EXPRESSIONENGINE_MULTIPLICATIONEXPRESSION_H
