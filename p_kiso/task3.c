//2301089

// library include
#include <stdio.h>
#include <math.h>

// main
int main(void){
    // 変数作成
    double b,c,D;

    // 係数入力
    scanf(" %lf %lf",&b,&c);
    D = b * b - 4 * c;

    if (D > 0){ // 二つの実数解
        printf("x = %f\n",(- b + sqrt(D))/2);
        printf("x = %f\n",(- b - sqrt(D))/2);
    } else if (D < 0){ // 二つの共役虚数解
        printf("no real roots\n");
    } else { // 重解
        printf("x = %f\n",- b / 2);
    }

    return 0;
}