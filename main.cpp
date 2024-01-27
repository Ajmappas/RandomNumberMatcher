#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

int main()
{

	std::string TheNumber = "4876";

	bool shouldStop = false;
	while (!shouldStop)
	{
		int random0 = 0 + (rand() % 10);
		int random1 = 0 + (rand() % 10);
		int random2 = 0 + (rand() % 10);
		int random3 = 0 + (rand() % 10);

		std::string number = std::to_string(random0) + std::to_string(random1) + std::to_string(random2) + std::to_string(random3);

		if (number == TheNumber)
		{
			std::time_t now = std::time(0);

			// convert now to string form
			char *date_time = std::ctime(&now);

			std::cout << "The number matched!!! The time is: " << date_time << std::endl;
			shouldStop = true;
		}

		std::cout << number << std::endl;
	}

	return 0;
}