#include <cstdlib>
#include <ctime>
#include <iostream>

int main(int argc, char* argv[])
{
    srand(time(nullptr)); // seed the random number generator with the current time
    for (;;) // infinite loop
    {
        int i = rand() % 10; // generate a random number between 0 and 9
        switch (i) // check the value of i
        {
        case 1:
            std::cout << "Sensor ID: 1 Triggered" << std::endl;
            break;
        case 2:
            std::cout << "Alarm ID: 1 Triggered" << std::endl;
            break;
        case 3:
            std::cout << "Alarm ID: 2 Triggered" << std::endl;
            break;
        case 4:
            std::cout << "Sensor ID: 2 Triggered" << std::endl;
            break;
        case 5:
            std::cout << "Alarm ID: 3 Triggered" << std::endl;
            break;
        case 6:
            std::cout << "Sensor ID: 3 Triggered" << std::endl;
            break;
        case 7:
            std::cout << "Alarm ID: 4 Triggered" << std::endl;
            break;
        case 8:
            std::cout << "Sensor ID: 4 Triggered" << std::endl;
            break;
        case 9:
            std::cout << "Alarm ID: 5 Triggered" << std::endl;
            break;
        case 10:
            std::cout << "Sensor ID: 5 Triggered" << std::endl;
            break;
        default:
            std::cout << "Manual Alarm Triggered" << std::endl;
        }
    }
}
