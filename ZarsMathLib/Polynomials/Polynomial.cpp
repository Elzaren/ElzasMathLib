#include "Polynomial.h"

Polynomial::Polynomial(int length, Term terms[]):m_terms(terms), m_length(length){}

int Polynomial::length(){
    return m_length;
}

void Polynomial::addTerm(int grade, int coeficent){
    for(int c = 0; c <= m_length; c++){
        
    }
}


Term Polynomial::getTerm(int grade){
    for(int c = 0; c <= m_length; c++){
        if(m_terms[c].grade==grade){
            return m_terms[c];
        }
    }
}

void Polynomial::setTerm(int grade, int coeficent){

   int c = 0;

   do{
    c++;
   }while( (c!=m_terms[c].grade) && (c<=m_length) );

    if(m_terms[c].grade==grade){ m_terms[c].coeficent = coeficent; }
    else{ addTerm(grade, coeficent); }
}

//Change cuz u made a term struct and grade isnt pos in array anymore
Polynomial operator+(Polynomial &l, Polynomial &r){
    Polynomial* biggerGrade = l.length() > r.length() ? &l : &r;
    Polynomial outputPolynomial;
    for(int c = 0; c < biggerGrade->length(); c++){
        outputPolynomial.setTerm( c, l.getTerm(c).grade + r.getTerm(c).grade);
    }
    return outputPolynomial;
}

Polynomial::~Polynomial(){
    delete[] m_terms;
}