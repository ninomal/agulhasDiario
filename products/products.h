#include <iostream>
#include <stdio.h>
#include <math.h>
#include "..\productsService\productsService.h"
#include "..\enums\enumsMonth.h"
#include "..\enums\enumsStringMonth.h"
#include "..\entities\needleBroken.h"


using namespace std;


class Products{
    private:
    NedleBroken needleBroken;
    ProductsService productsService;
    EnumsRepeat enumRepeat;
    EnumsMonthString enumsStrings;
    int agulhasBrokenDay;
    int numberMonth;
    int checkDay;
    int forDays = {0};
    float totalSum ;
    float totalDays ;
    float totalConsume;

    

    public:
    void checkFirstDay(){
        checkDay = productsService.firstDayMonth();
        if (checkDay == 1){
          enumRepeat = NOTREPET;
        }
        else{
          enumRepeat = REPET;
        }
    }
    
    void totalAgulhas(int totalArg){
        productsService.agulhasTotal(totalArg);
    }

    void totalAgulhasAVG(float totalAVG){
        productsService.agulhasAVG(totalAVG);
    }

};