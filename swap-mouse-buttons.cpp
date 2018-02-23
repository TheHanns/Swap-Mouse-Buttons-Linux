#include <iostream>
#include <cstdlib>

int main() {

	int opcio;

	do {
	system("clear");
	std::cout << std::endl << std::endl << "Options:" << std::endl;
	std::cout << "	1 to set to default" << std::endl;
	std::cout << "	2 to reverse left and right click" << std::endl << std::endl;
	std::cout << "	Or any key to exit" << std::endl << std::endl << std::endl;
	std::cin >> opcio;

	if (opcio == 1) {
		system("sudo xmodmap -e 'pointer = 1 2 3'");
		std::cout << "Alright homie, it's done" << std::endl;
		std::cout << "Press any key to continue" << std::endl << std::endl;
		std::cin.get();
                std::cin.get();
	}
	else if (opcio == 2) {
		system("sudo xmodmap -e 'pointer = 3 2 1'");
		std::cout << "Alright homie, it's done" << std::endl << std::endl;
		std::cout << "Press any key to continue" << std::endl << std::endl;
		std::cin.get();
                std::cin.get();
	}
	else {
		return 0;
	}

	} while(opcio != 1 || opcio != 2);

}
