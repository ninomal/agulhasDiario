#include <stdio.h>
#include <math.h>
#include <string>
#include <Api\api.h>
#include <enums\enumsMonth.h>

using namespace std;

//here
class ProductsService{
    private:
        float total;
        int month;
        bool check;
        Api api;
        string monthString;
        EnumsMonth enumRepeat;

    public:
      void agulhasnbroke(int agulhas){
          api.addAgulhasMsql(agulhas);
        } 

      void agulhasTotal(int agulhasTotal){
        api.addAgulhasTotal(agulhasTotal);
      }

      void agulhasAM(float agulhasAm){
        api.addAgulhasAm(agulhasAm);
      }

      void firstDayMonth(){
        check = api.firstDayCheck();
        if (check == true){
          enumRepeat = NOTREPET;
        }
        else{
          enumRepeat = REPET;
        }
        
      }


      // Teste void finuraRelacional()

};