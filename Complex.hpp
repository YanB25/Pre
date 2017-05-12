#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <string>
class Complex {
public:
    typedef int num_t;

    Complex() : real_(0), imag_(0) {}
    explicit Complex(num_t real) : real_(real), imag_(0) {}
    Complex(num_t real, num_t imag) : Complex(real), imag_(imag) {}
    Complex(const Complex& c) = default;
    Complex& operator=(const Complex& c);

    Complex& operator+=(const Complex& rhs);
    Complex operator+(const Complex& rhs);
    friend Complex& operator*=(const Complex& lhs, double num);
    friend Complex operator*(const Complex& lhs, double num);
    friend Complex operator*(double num, const Complex& rhs);

//protected:

private:
    num_t real_;
    num_t imag_;
};
//do real work
Complex& Complex::operator+=(const Complex& rhs) {
    real_ += rhs.real_;
    imag_ += rhs.imag_;
    return *this;
}
//delegation
Complex Complex::operator+(const Complex& rhs) {
    Complex ret(*this);
    ret += rhs;
    return ret;
}


//do real work
Complex& Complex::operator*=(const Complex& lhs, double num) {
    lhs.real_ *= num;
    lhs.imag_ *= num;
    return *this;
}
//delegation
Complex Complex::operator*(const Complex& lhs, double num) {
    Complex ret(*this);
    ret *= num;
    return ret;
}

Complex Complex::operator*(double num ,const Complex& rhs) {
    return rhs * num;
}
#endif
