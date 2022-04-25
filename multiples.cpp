#include <iostream>
#include <string>
#include "func.cpp"

int main() {
	std::string multiplestr;
	int multiple;

	std::cout << "Enter multiple: ";
	std::cin >> multiplestr;

    // handle all errors in this function so we pass over a clean integer
	try {
	    multiple = std::stoi(multiplestr);
    } catch(std::invalid_argument) {
    	std::cout << "Sum ting wong, problem converting multiplestr to multiple int\n" << multiplestr << std::endl;
    	return 1;
    }

	if (multiple <=0) {
		std::cout << "Value is less than 1, your PC will now explode.\n";
		return 1;
	}

    calculate(multiple=multiple);
}