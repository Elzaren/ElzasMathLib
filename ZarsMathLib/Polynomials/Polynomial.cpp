#include "Polynomial.h"
#include <iostream>

Polynomial::~Polynomial(){
    delete[] m_terms;
    m_terms = nullptr;
}

int Polynomial::length(){
    return m_length;
}