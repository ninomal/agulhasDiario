#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class enumsMonth{
    private:
    string nameOfMonth;


    public:
    string selectMonthStrig(const int month){
        switch(month)
        {
        case  1:
            nameOfMonth = "Janeiro";
            break;
        case  2:
            nameOfMonth = "Fevereiro";
            break;
        case  3:
            nameOfMonth = "Março";
            break;
        case  4:
            nameOfMonth = "Abril";
            break;
        case  5:
            nameOfMonth = "Maio";
            break;
        case  6:
            nameOfMonth = "Junho";
            break;
        case  7:
            nameOfMonth = "Julho";
            break;  
        case  8:
            nameOfMonth = "Agosto";
            break;
        case  9:
            nameOfMonth = "Setembro";
            break;
        case  10:
            nameOfMonth = "Outubro";
            break;
        case  11:
            nameOfMonth = "Novembro";
            break;
        case 12:
            nameOfMonth = "Dezembro";
            break;
        default:
            cout << "Dia do mes errado: "<< month << endl;
            break;
        }
       
    } 


};