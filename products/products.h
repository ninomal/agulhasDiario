#include <iostream>
#include <stdio.h>
#include <math.h>
#include <enums\EnumsMonth.h>
using namespace std;


class Products{
    private:
    int days;
    int forDays = {0};
    int monthly ;
    int finura ;
    int agulhasBrokenDay;
    enum EnumsMonth mesReaptVar = REPET;
    float totalSum ;
    float totalDays ;
    float totalConsume;


    public:
    int monthlySlect(int month){
        monthly = month;
        mesReaptVar = NOTREPET;
        return monthly;
    }

    int daySelect(int day){
        days = day;
        return days;
    }

    int agulhasBroke(int agulhas){
        agulhasBrokenDay = agulhas;
        return agulhasBrokenDay;
    }

    int finuraSelect(int finuraInt){
        finura = finuraInt;
        return finura;
    }

   // enum boll monthly reapt

};