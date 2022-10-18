//#include <iostream>
////I used Task09.cpp code 
//int main() {
//	int firstNum = 0, secNum = 0, thirdNum = 0, temp = 0;
//	std::cout << "Insert three integers: " << std::endl;
//	std::cin >> firstNum >> secNum >> thirdNum;
//	 // larger number between the first two numbers
//	if (firstNum > secNum) {
//		temp = firstNum;
//		firstNum = secNum; // swap the values of the first two nums
//		secNum = temp;
//	} 
//	// until now: firstNum - min, secNum >= firstNum
//	
//	if (thirdNum >= secNum) {
//		std::cout << (thirdNum * 100) + (secNum * 10) + (firstNum * 1) << std::endl;
//		// firstNum <= secNum <= thirdNum 
//	}
//	else {
//		if (thirdNum >= firstNum) {
//			std::cout << (secNum * 100) + (thirdNum * 10) + (firstNum * 1) << std::endl;
//			// firstNum <= thirdNum <= secNum 
//		}
//		else {
//			std::cout << (secNum * 100) + (firstNum * 10) + (thirdNum * 1) << std::endl;
//			// thirdNum < firstNum <= secNum 
//		}
//	}
//
//
//}