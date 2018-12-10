#include "Random_search_method.hpp"

int main(){
    unsigned number = 0;
	bool end_of_the_program = false;
	while (!end_of_the_program) {
		std::cout << "Выберете один вариант: " << std::endl;
		std::cout << "1. Вероятность непопадания в ε-окрестность экстремума за одной испытание." << std::endl;
		std::cout << "2. Выражение для вероятности непопадания в ε-окрестность экстремума за N испытаний." << std::endl;
		std::cout << "3. Нахождения необходимое число испытаний N." << std::endl;
		std::cout << "4. Поиск минимума мультимодальной функции." << std::endl;
		std::cout << "0.Выход." << std::endl;
		std::cin >> number;
		switch (number)
		{
		case 1: {
			    RSMethod method;
                method.search_P1();
		}break;
		case 2: {
                RSMethod method;
                method.expression_Pn();
		}break;
		case 3: {
                RSMethod method;
                method.search_n(false);
		}break;
		case 4: {
				RSMethod method;
                method.search_n(true);
		}break;
		default:
			end_of_the_program = true;
			break;
		}
	}
	std::cout << "До свидания:)" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
}
