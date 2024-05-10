#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

struct Term{
  int coeficent = 0;
  int grade = 0;
};


class Polynomial {
  public:
    Polynomial() = default;
    ~Polynomial();

    int length();

  private:
    int m_length = 0;
    Term* m_terms = nullptr;
    int m_grade = 0;
};

#endif