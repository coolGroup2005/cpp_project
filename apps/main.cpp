#include <iostream>
#include "investing/candle.h"

int main(int, char**){
    Candle candle1 {777, 1000, 390, 500, 1234, 1000};
    candle1.print();
}
