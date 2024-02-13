#ifndef POLYNOMYAL_H_
#define POLYNOMYAL_H_

struct Term{
  int coeficent = 0;
  int grade = 0;
};


class Polynomial {
  public:
    Polynomial() = default;
    Polynomial(int length, Term terms[]);
    ~Polynomial();
    int length();
    void addTerm(int grade, int coeficent);
    Term getTerm(int grade);
    void setTerm(int grade, int coeficent);

  private:
    int m_length = 0;
    Term* m_terms = nullptr;
    int m_grade = 0;
};

#endif