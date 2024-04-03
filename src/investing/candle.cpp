#include <iostream>

#include "investing/candle.h"
#include "fmt/format.h"

Candle::Candle(double open, double high, double low, double close, double volume, unsigned long dayTime) : 
        open(open), high(high), low(low), close(close), volume(volume), dayTime(dayTime) {};


void Candle::print() const{
    std::cout << fmt::format("Candle(open={}, high={}, low={}, close={}, volume={}, dayTime={})\n", 
                            open, high, low, close, volume, dayTime); //написать в {} цифру для изменения порядка подстановки переменных
}
