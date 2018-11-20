// standard libraries
#include <stdio.h>
#include <stdlib.h>

int main() {

    // task 1
    double bruttogehalt = 0, steuersatz = 0, steuern = 0;

    printf("Bitte geben Sie ein Bruttogehalt ein!\n");
    scanf("%lf", &bruttogehalt);

    if(bruttogehalt>100000){
       steuern = (bruttogehalt-100000)*0.45+40000*0.4+30000*0.35+20000*0.3;
    }else if(bruttogehalt>=60000){
        steuern = (bruttogehalt-60000)*0.4+30000*0.35+20000*0.3;
    }else if(bruttogehalt>=30000){
        steuern = (bruttogehalt-30000)*0.35+20000*0.3;
    }else if(bruttogehalt>=10000){
        steuern =(bruttogehalt-10000)*0.3;
    }else steuern = 0;

    steuersatz = steuern*100/bruttogehalt;

    printf("anfallende Steuern : %.2f Euro und effektiver Steuersatz: %.3f %%",steuern, steuersatz);

    return 0;
}
