#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>

class RSMethod {
public:
    RSMethod() : q(0.005), P(0.9), a(-2), b(4) {}
    void search_P1();
    void expression_Pn();
    void search_n(bool);
private:
    const double q;
    const double P;
    const int a;
    const unsigned b;
};
