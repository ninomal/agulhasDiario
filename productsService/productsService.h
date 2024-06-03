#include <stdio.h>
#include <math.h>
#include <string>
#include <Api\api.h>


using namespace std;

//here
class ProductsService{
    private:
        float total;
        int month;
        Api api;
        string monthString;

    public:
        int agulhasnbroke(int agulhas){
          api.addAgulhasMsql(agulhas);
        } 


};