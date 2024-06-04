#include <iostream>
#include <stdio.h>
#include <math.h>
#include <enums\EnumsMonth.h>
#include <enums\enumsStringMonth.h>
#include <productsService\productsService.h>


using namespace std;


class Products{
    private:
    int days;
    int forDays = {0};
    int monthly ;
    int finura ;
    int agulhasBrokenDay;
    ProductsService productsService;
    enum EnumsMonth mesReaptEnum;
    EnumsMonthString enumsStrings;
    float totalSum ;
    float totalDays ;
    float totalConsume;


    public:
    int monthlySlect(int month){
        monthly = month;
        return monthly;
    }

    int daySelect(int day){
        days = day;
        return days;
    }

    int agulhasBroke(int agulhas){
        agulhasBrokenDay = agulhas;
        productsService.agulhasnbroke(agulhasBrokenDay);
        return agulhasBrokenDay;
    }

    int finuraSelect(int finuraInt){
        finura = finuraInt;
        return finura;
    }

    string monthString(int numberMonth){
        return enumsStrings.selectMonthStrig(numberMonth);
    }

    

};