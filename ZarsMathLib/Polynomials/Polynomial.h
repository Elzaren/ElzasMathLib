#ifndef POLYNOMYAL_H_
#define POLYNOMYAL_H_

struct term
{
  int coeficent;
  int grade;
};

class Polynomial {
  public:
    Polynomial(int length, term terms[]);
    int length(){};

  private:
    int m_length = 0;
    int* m_terms = nullptr;
};
#endif