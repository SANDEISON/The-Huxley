#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x=0,y=0,M=0,R;//M = moedas   //R=Reino(0 y<x | 1 y>x)
    long N,i;
    char L;//letra
    scanf(" %i",&N);
    for(i=0;i<N;i++)
    {
        scanf(" %c",&L);
        if(L == 'D') x++;
        else if(L == 'C') y++;
        //printf("x=%i y=%i\n",x,y);
        if(i==0)
        {
            if(y<x) R = 0;
            else if(y>x) R = 1;
            //printf("R= %i\n",R);
        }
        else if(R==0 && y>x)
        {
            R=1;
            M++;
        }
        else if(R==1 && y<x)
        {
            R=0;
            M++;
        }
    }
    printf("%i",M);
	return 0;
}