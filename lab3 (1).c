#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int facts(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}
double numeros(double x,int r){
    int s = 2*r;
    if(r%2==1){    
        return (-1*pow(x,s))/facts(s);
    }
    else{return (pow(x,s))/facts(s);}
}
double cosinus(double x){
    long double res = 1;
    double eps=0.0001;
    double temp=0;
    for(int r=1;fabs(res-temp)>=eps;r++){
        temp = res;
        res+=numeros(x,r);
    }
    return res;
}
int main(int argc, char const *argv[]){
    double f = cosinus(1);
    printf("%f\n", f);
    printf("%f\n", cos(1));
    return 0;
}

