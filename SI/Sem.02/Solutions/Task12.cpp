//#include <iostream>
//
//int main() {
//	int day = 1, month = 1;
//	std::cout << "Day: ";
//	std::cin >> day;
//	std::cout << "\nMonth: ";
//	std::cin >> month;
//	if (month >= 1 && month <= 12)  { 
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { //months with 31 days
//			if (day >= 1 && day < 31) {
//				std::cout << "Next date: " << ++day  << " " << month;
//			}
//			else if (day == 31) {
//				std::cout << "Next date: " << (day = 1) << " " << ++month;
//			}
//			else {
//				std::cout << "Wrong day input!" << std::endl;
//			}
//		}
//		else if (month == 2) { //february special case for not leap years
//			if (day >= 1 && day < 28) {
//				std::cout << "Next date: " << ++day << " " << month;
//			}
//			else if (day == 28) {
//				std::cout << "Next date: " << (day = 1) << " " << ++month;
//			}
//			else {
//				std::cout << "Wrong day input!" << std::endl;
//			}
//		}
//		else { //months with 30 days
//			if (day >= 1 && day < 30) {
//				std::cout << "Next date: " << ++day << " " << month;
//			}
//			else if (day == 30) {
//				std::cout << "Next date: " << (day = 1) << " " << ++month;
//			}
//			else {
//				std::cout << "Wrong day input!" << std::endl;
//			}
//		}
//	}
//	else {
//		std::cout << "Wrong month input!";
//	}
//}