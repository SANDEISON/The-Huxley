#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diasDoMes(int mes,int ano){
    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12) return 31;
        else if(mes==4||mes==6||mes==9||mes==11) return 30;
        else if(mes==2 && (ano%4==0 && ano%100!=0 ) || ano%400==0) return 29;
        else return 28;
}

int main() {
    int dia1,mes1,ano1,dia2,mes2,ano2,d,m,a,i;
    long int diasED=0;
    scanf("%d/%d/%d",&dia1,&mes1,&ano1);
    scanf("%d/%d/%d",&dia2,&mes2,&ano2);

    if(ano1 != ano2){
        for(i=ano1+1;i<ano2;i++){
            if((i%4 == 0 && i%100 != 0 ) || i%400 == 0) diasED+=366;
            else diasED+=365;
        }

        for(i=mes1+1;i<=12;i++){
            diasED+=diasDoMes(i,ano1);
        }
        diasED+=(diasDoMes(mes1,ano1)-dia1);

        for(i=1;i<mes2;i++){
            diasED+=diasDoMes(i,ano2);
        }
        diasED+=dia2;
    }
    else if(mes1 != mes2){
        for(i=mes1+1;i<mes2;i++){
            diasED+=diasDoMes(i,ano1);
        }
        diasED+=(diasDoMes(mes1,ano1)-dia1);
        diasED+=dia2;
    }
    else{
        diasED+=dia2-dia1;
    }
    
    printf("%d",diasED);
	return 0;
}