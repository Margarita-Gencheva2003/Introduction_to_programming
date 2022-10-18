//#include <iostream>
//
//int main() {
//	char symbol = '.';
//	std::cout << "Insert a letter: ";
//	std::cin >> symbol; 
//	if (islower(symbol)) {
//		std::cout << (char)toupper(symbol); //this function returns a number so we have to parse it to char
//	}
//    if (isupper(symbol)) {
//		std::cout << (char) tolower(symbol); 
//	}
//	if(symbol < 65 ||( symbol > 90 && symbol < 97) || symbol > 123 ) { // ASCII table for chars != letter(latin alphabet)
//		std::cout << "Invalid symbol!" << std::endl;
//	}
//}