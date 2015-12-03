//
// Created by ryan on 02/12/15.
//

#ifndef EXPRESSIONENGINE_MULTIPLICATIONEXPRESSION_H
#define EXPRESSIONENGINE_MULTIPLICATIONEXPRESSION_H

#include "ArithmeticExpression.h"

class MultiplicationExpression : public ArithmeticExpression{
public:
    MultiplicationExpression();
    virtual std::string evaluate ();
    virtual float convert (std::string s);
    virtual void print();
};


#endif //EXPRESSIONENGINE_MULTIPLICATIONEXPRESSION_H
