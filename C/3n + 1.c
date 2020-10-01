#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int funcao(long int n){
    long int c=1;
    while(n!=1){
        //printf("n=%ld  c=%ld\n",n,c);
        if(n%2==0) n/=2;
        else n=n*3 + 1;
        c++;
    }
    return c;
}

int main() {
    long int i,j,c=1,k,buf;
    while(scanf("%ld %ld",&i,&j) != EOF){
        for(k=(i<j?i:j);k<=(j>i?j:i);k++){
            buf = funcao(k);
            if( buf > c) c=buf;
        }
        printf("%ld %ld %ld\n",i,j,c);
        c=1;
    }
	return 0;
}