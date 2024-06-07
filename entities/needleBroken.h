class NedleBroken{
    private:
    int finura;
    int agulhasQuebradas;
    int day;
    int month;

    public:
    NedleBroken(int finuraArgs, int agulhasQuebradasArgs, int dayArg, int monthArg){
        finura = finuraArgs;
        agulhasQuebradas = agulhasQuebradasArgs;
        day = dayArg;
        month = monthArg;
    }

    int getFinura(){
        return finura;
    }

    int getAgulhas(){
        return agulhasQuebradas;
    }

    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

};