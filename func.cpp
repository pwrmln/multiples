#include "func.h"

int calculate(int multiple=1) {
	int number = 0;
	for (int i=0; number <= (multiple * 100); i++) {
		std::cout << i << "*" << multiple << "=" << number << "\n";
		number+=multiple;
	}
	return 0;
}