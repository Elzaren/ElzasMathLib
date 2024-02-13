#include "Polynomial.h"
#include <iostream>

Polynomial::Polynomial(int length, Term terms[]):m_terms(terms), m_length(length){}

int Polynomial::length(){
    return m_length;
}


void Polynomial::addTerm(int grade, int coeficent){
    int c = -1;
    do{
        c++;
    }while( (c <= m_length) && (m_terms[c].grade!=grade) );
    if(m_terms[c].grade==grade){return; }
    else{

        Term* newTerms = new Term[m_length+1];
        for(int c = 0; c<=m_length; c++){
            newTerms[c] = m_terms[c];
        }
        newTerms[m_length+1].grade = grade;
        newTerms[m_length+1].grade = coeficent;
        m_length+=1;
        delete[] m_terms;
        m_terms = newTerms;
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

   int c = -1;

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