#include <iostream>

int main() {
	int naturalNum = 1000, firstNum = 0, secNum = 0;
	std::cout << "Input a natural number between 1000 and 9999: ";
	std::cin >> naturalNum;
	if (naturalNum >= 1000 && naturalNum <= 9999) {
		firstNum = (naturalNum / 1000) * 10 + (naturalNum % 10) * 1;
		secNum = (naturalNum / 100 % 10) * 10 + (naturalNum / 10 % 10) * 1;
		if (firstNum < secNum) {
			std::cout << firstNum << " < " << secNum << std::endl;
		}
		else if (firstNum == secNum) {
			std::cout << firstNum << " = " << secNum << std::endl;
		}
		else {
			std::cout << firstNum << " > " << secNum << std::endl;
		}
	}
	else {
		std::cout << "Wrong input!" << std::endl;
	}
	
}