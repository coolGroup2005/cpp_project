#ifndef CANDLE
#define CANDLE

struct Candle {
    double open; //начало торговой цены в начало торгового фрейма
    double high; //самая высокая цена таймфрейма
    double low; //самая низкая цена таймфрейма
    double close; //торговая цена в конце таймфрейма
    double volume; //объём торгов на таймфрейме
    unsigned long dayTime; 

    Candle(double open, double high, double low, double close, double volume, unsigned long dayTime);

    void print() const;
};

#endif

