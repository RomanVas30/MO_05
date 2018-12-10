#include "Random_search_method.hpp"

void RSMethod::search_P1(){
    for (unsigned i = 0; i < 20; ++i){
        std::cout << "Для " << i + 1 << "-го эксперемента P1 = " << (1 - q*i) << std::endl;
    }
}

void RSMethod::expression_Pn(){
    std::cout << "Pn = (1 - ε/(b - a))^n" << std::endl;
}

void RSMethod::search_n(bool multimodal){
    if (!multimodal)
    for (unsigned i = 0; i < 10; ++i){
        std::cout << i + 1 << "-ый эксперимент:" << std::endl;
        for (unsigned k = 1; k < 21; ++k){
            std::cout << "  q =  " << q*k << std::endl;
            unsigned n = log(1 - (P + 0.01*i))/log(1 - q*k);
            double min = -cos(0.5*a) - 1;
            for (unsigned j = 0; j < n; ++j){
                double x = a*100 + std::rand() % ((b-a)*100);
                x = x / 100;
                if ((-cos(0.5*(x)) - 1) < min)
                   min = -cos(0.5*(x)) - 1 ;
            }
            std::cout << "      f(x) = " << min << std::endl;
        }
    }
    else
    for (unsigned i = 0; i < 10; ++i){
        std::cout << i + 1 << "-ый эксперимент:" << std::endl;
        for (unsigned k = 1; k < 21; ++k){
            std::cout << "  q =  " << q*k << std::endl;
            unsigned n = log(1 - (P + 0.01*i))/log(1 - q*k);
            double min = (-cos(0.5*a) - 1)*sin(5*a);
            for (unsigned j = 0; j < n; ++j){
                double x = a*100 + std::rand() % ((b-a)*100);
                x = x / 100;
                if ((-cos(0.5*(x)) - 1)*sin(5*x) < min)
                   min = (-cos(0.5*(x)) - 1)*sin(5*x) ;
            }
            std::cout << "      f(x) = " << min << std::endl;
        }
    }
}