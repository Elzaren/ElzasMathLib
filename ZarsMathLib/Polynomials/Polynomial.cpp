#include "Polynomial.h"

Polynomial::Polynomial(int length, int terms[]):m_terms(terms), m_length(length){}

int Polynomial::length(){
    return m_length;
}

int Polynomial::getTerm(int grade){
    return m_terms[grade];
}

void Polynomial::setTerm(int grade, int coeficent){
    m_terms[grade]=coeficent;
}

Polynomial operator+(Polynomial &l, Polynomial &r){
    Polynomial* biggerGrade = l.length() > r.length() ? &l : &r;
    Polynomial outputPolynomial;
    for(int c = 0; c < biggerGrade->length(); c++){
        outputPolynomial.setTerm( c, l.getTerm(c) + r.getTerm(c));
    }
    return outputPolynomial;
}

Polynomial::~Polynomial(){
    delete[] m_terms;
}