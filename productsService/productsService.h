#include <stdio.h>
#include <math.h>
#include <string>
#include "..\Api\api.h"


using namespace std;


class ProductsService{
    private:
        float total;
        int month;
        int checkDay;
        Api api;
        string monthString;
        

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

      int firstDayMonth(){
        checkDay = api.firstDayCheck();
        return checkDay;
      }


      // Teste void finuraRelacional()

};