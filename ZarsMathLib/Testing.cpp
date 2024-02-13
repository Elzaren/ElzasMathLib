#include "Polynomial.h"
#include <iostream>
using namespace std;

int main(){
    Polynomial a;
    a.addTerm(2,3);
    a.addTerm(3,4);
    cout<<a.getTerm(0).coeficent;
    cout<<a.getTerm(2).coeficent;
    cout<<a.getTerm(3).coeficent;
}