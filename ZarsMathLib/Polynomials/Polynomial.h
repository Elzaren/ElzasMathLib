#ifndef POLYNOMYAL_H_
#define POLYNOMYAL_H_

class Polynomial {
  public:
    Polynomial() = default;
    Polynomial(int length, int terms[]);
    ~Polynomial();
    int length();
    int getTerm(int term);
    void setTerm(int grade, int coeficent);
    

  private:
    int m_length = 0;
    int* m_terms = nullptr;
};

#endif