#include <stdio.h>
#include <stdlib.h>

void easter(int year){
    int a = year%19;
    int b = year%4;
    int c = year%7;
    int d = (19*a+15)%30;
    int e = (2*b+4*c+6*d+6)%7;
    int f = d + e;
    printf("Пасха празднуется: ");
    if(f<=26){
        f+=4;
        printf("%d апреля\n",f);
    }
    else{
        f-=26;
        printf("%d мая\n", f);}
}
void main(int argc,char const *argv[]){
    int n =atoi(argv[1]);
    easter(n);
}