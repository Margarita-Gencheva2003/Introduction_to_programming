//#include <iostream>
//
//int main() {
//	double firstNum = 0, secNum = 1;
//	char operation = '+';
//	std::cout << "Insert  the first number:" << std::endl;
//	std::cin >> firstNum;
//	std::cout << "Insert operation(+, -, *, /)" << std::endl;
//	std::cin >> operation;
//	std::cout << "Insert  the second number:" << std::endl;
//	std::cin >> secNum;
//	switch (operation) {
//		case '+':
//			std::cout <<"Result: " << firstNum + secNum << std::endl;
//			break;
//		case '-':
//			std::cout << "Result: " << firstNum - secNum << std::endl;
//			break;
//		case '*':
//			std::cout << "Result: " << firstNum * secNum << std::endl;
//			break;
//		case '/':
//			if (secNum != 0) {
//				std::cout << "Result: " << firstNum / secNum << std::endl;
//			}
//			else {
//				std::cout << "You can divide by zero!" << std::endl;
//			}
//			break;
//		default:
//			std::cout << "Unsupported operation!" << std::endl;
//	}
//
//}