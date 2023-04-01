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
			case 1:
				std::cout << "January" << std::endl;
				break;
			case 2:
				std::cout << "February" << std::endl;
				break;
			case 3:
				std::cout << "March" << std::endl;
				break;
			case 4:
				std::cout << "April" << std::endl;
				break;
			case 5:
				std::cout << "May" << std::endl;
				break;
			case 6:
				std::cout << "June" << std::endl;
				break;
			case 7:
				std::cout << "Jule" << std::endl;
				break;
			case 8:
				std::cout << "August" << std::endl;
				break;
			case 9:
				std::cout << "September" << std::endl;
				break;
			case 10:
				std::cout << "October" << std::endl;
				break;
			case 11:
				std::cout << "November" << std::endl;
				break;
			case 12:
				std::cout << "December" << std::endl;
				break;
			}
		}
	}
}