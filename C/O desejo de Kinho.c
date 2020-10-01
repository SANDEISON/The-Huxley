#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long p,i,divisores=2;
    while(scanf("%lld",&p) != EOF){
            for(i=2;i*i<p;i++){
                if(p%i==0) divisores = divisores + 2;
            }
            if(i*i == p) divisores++;
        printf("%lld\n",divisores);
        divisores = 2;
    }
	return 0;
}