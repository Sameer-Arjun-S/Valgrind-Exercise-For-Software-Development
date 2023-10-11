#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{   
    //Since the 'new' command below dynamically allocates the memory, and
    // there is no command to free the memory, it can be resolved by removing this
    //std::vector<int> *readings = new std::vector<int>(mSamples, 10);
    std::vector<int> readings(mSamples, 10);

    //double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
    double result = std::accumulate( readings.begin(), readings.end(), 0.0 ) / readings.size();
    
    return result;
}


