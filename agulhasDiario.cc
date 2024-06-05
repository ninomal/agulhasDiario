#include <stdio.h>
#include <string>
#include <iostream>
#include "products\products.h"
#include "enums\enumsMonth.h"


using namespace std;

int main(){
    int day;
    int forDay = {0};
    int finura;
    int agulhasQuebradas;
    int monthly ;
    string linkString;
    Products products;

    cout << "Mes: ";
    cin >> monthly;
    products.monthlySlect(monthly);

    cout << "Dia";
    cin >> day;
    products.daySelect(day);

    cout << "Finura:";
    cin >> finura;
    products.finuraSelect(finura);
    
    cout << "Agulhas quebradas: " ;
    cin >> agulhasQuebradas;
    products.agulhasBroke(agulhasQuebradas);
   

    
}

    //add item bank
    // sum and return total
    //delete select item

    


