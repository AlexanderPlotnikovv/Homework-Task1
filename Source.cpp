#include <iostream>

int main()
{
	enum class seasons {
		January = 1,
		February,
		March,
		April,
		May,
		June,
		Jule,
		August,
		September,
		October,
		November,
		December
     };
	seasons season = static_cast<seasons>(1);
	while (static_cast<int>(season) != 0) {
		std::cout << "Enter season: ";
		int num;
		std::cin >> num;
		season = static_cast<seasons>(num);
		if (static_cast<int>(season) == 0) {
			std::cout << "Bye!";
			break;
		}
		else if (static_cast<int>(season) > 12 || static_cast<int>(season) < 0) {
			std::cout << "Incorrect season!" << std::endl;
		}
		else {
			switch (static_cast<int>(season)) 
			{
			case static_cast<int>(seasons::January):
				std::cout << "January" << std::endl;
				break;
			case static_cast<int>(seasons::February):
				std::cout << "February" << std::endl;
				break;
			case static_cast<int>(seasons::March):
				std::cout << "March" << std::endl;
				break;
			case static_cast<int>(seasons::April):
				std::cout << "April" << std::endl;
				break;
			case static_cast<int>(seasons::May):
				std::cout << "May" << std::endl;
				break;
			case static_cast<int>(seasons::June):
				std::cout << "June" << std::endl;
				break;
			case static_cast<int>(seasons::Jule):
				std::cout << "Jule" << std::endl;
				break;
			case static_cast<int>(seasons::August):
				std::cout << "August" << std::endl;
				break;
			case static_cast<int>(seasons::September):
				std::cout << "September" << std::endl;
				break;
			case static_cast<int>(seasons::October):
				std::cout << "October" << std::endl;
				break;
			case static_cast<int>(seasons::November):
				std::cout << "November" << std::endl;
				break;
			case static_cast<int>(seasons::December):
				std::cout << "December" << std::endl;
				break;
			}
		}
	}
}