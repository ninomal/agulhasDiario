#include <stdio.h>
#include <math.h>
#include <string>
#include "..\Api\api.h"
#include "..\entities\needleBroken.h"


using namespace std;


class ProductsService{
    private:
        float total;
        int month;
        int checkDay;
        Api api;
        string monthString;
        NedleBroken needleBroken;
        

    public:
      void agulhasnbroke(){
          api.addAgulhasMsql(needleBroken.getAgulhas());
        } 

      void day(){
          api.addDayMsql(needleBroken.getDay());
        } 
      
      void month(){
          api.addMonthMsql(needleBroken.getMonth());
        } 

      void agulhasTotal(int agulhasTotal){
        api.addAgulhasTotalMsql(agulhasTotal);
      }

      void agulhasAVG(float agulhasAm){
        api.addAgulhasAVgMsql(agulhasAm);
      }

      int firstDayMonth(){
        checkDay = api.firstDayCheck();
        return checkDay;
      }


      // Teste void finuraRelacional()

};