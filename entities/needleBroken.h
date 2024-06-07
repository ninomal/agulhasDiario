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

    int finuraGet(){
        return finura;
    }

    int agullhasGet(){
        return agulhasQuebradas;
    }

    int dayGet(){
        return day;
    }

    int monthGet(){
        return month;
    }

};