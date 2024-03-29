#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    //Rectifying the errors by initializing value to the 'terminator' boolean
    bool terminator =true;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
