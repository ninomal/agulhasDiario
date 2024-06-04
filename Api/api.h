#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class Api{
    private:
    int day;
    string html;
    string htmlSlice;

    public:
    string colectHTMLParams(string link){
        html = link;
    }

    string htmlSc(){
        //htlmSlice = colect here 
    }

    int intConvHtml(string htmlSlice){
        day = stoi(htmlSlice);
    }

    void addAgulhasMsql(int agulhas){
        //beta
    }

    void addAgulhasTotal(int agulhasTotal){
        //beta
    }
    void addAgulhasAm(float agulhasAm){
        //beta
    }

    //implement
    bool firstDayCheck(){
        return true;
    }
};