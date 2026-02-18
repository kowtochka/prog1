#include <stdio.h>
#include <stdlib.h>

double num(double x,int n){
    double y = 1;
    if(n>0){
        for(int i = 1;i<=n;i++){
            y*=x;
        }
    }
    else if(n=0){
        y=1;
    }
    else{
        for(int i = -1;i>=n;i--){
            y*=x;
        }
        y = 1/y;
    }
    printf("%f\n", y); 
    return y;
}
int main(int argc, char const *argv[]){
    int n = atoi(argv[2]);
    double x = atof(argv[1]);
    num(x,n);
    return 0;
}
