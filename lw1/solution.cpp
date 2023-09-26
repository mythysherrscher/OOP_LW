#include "solution.h"

int solution(int a,int b){
    int d = a;
    int c[b - a + 1];
    for (int i = 0; i < b - a + 1; i++){
        c[i] = d;
        d++;
    }
    for (int i = 0; i < b - a + 1; i++){
        int d = c[i];
        d = dec2binary(d);
        c[i] = d;
    }
    int k = 0;
    for (int i = 0; i < b - a + 1; i++){
            int l = 0;
            int e = c[i];
        while ( e > 0) {
            l++;
            e = e/10;
        }
        for(int j = 0; j < l; j++){
            if(c[i]%10==1) k++;
            c[i] = c[i]/10;
        }
    }
    return k;
}
