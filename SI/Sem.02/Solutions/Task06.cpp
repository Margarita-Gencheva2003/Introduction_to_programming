//#include <iostream>
//
//int main() {
//	//x1,x2 are roots for square equations; a, b, c - parameters
//	double a = 1, b = 1, c = 1, x1 = 0, x2 = 0;
//	// for being a square equation a != 0
//	std::cout << "a = ";
//	std::cin >> a;
//	std::cout << "\nb = ";
//	std::cin >> b;
//	std::cout << "\nc = ";
//	std::cin >> c;
//	if (a != 0) {
//		int D = (b * b) - (4 * a * c); // solve the value of D
//		if (D < 0) {
//			std::cout << "This square equation has no real roots." << std::endl;
//		}
//		else {
//			x1 = (-b + sqrt(D)) / (2 * a);
//			x2 = (-b - sqrt(D)) / (2 * a);
//			std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
//		}
//		
//	}
//	else {
//		std::cout << "This is not a square equation." << std::endl;
//	}
//}
