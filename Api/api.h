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

    void intConvHtml(string htmlSlice){
        day = stoi(htmlSlice);
    }

    void addDayMsql(int day){
        //beta
    }

    void addMonthMsql(int day){
        //beta
    }

    void addAgulhasMsql(int agulhas){
        //beta
    }

    void addAgulhasTotalMsql(int agulhasTotal){
        //beta
    }
    void addAgulhasAVgMsql(float agulhasAm){
        //beta
    }

    //implement
    bool firstDayCheck(){
        return true;
    }
};