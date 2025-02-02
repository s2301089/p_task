// 2301089

// library include
#include <stdio.h>

// main
int main(void){
    // 変数作成
    double r,theta_deg,s_area;

    // 半径と角度の入力
    scanf(" %lf",&r);
    scanf(" %lf",&theta_deg);

    // 面積計算出力
    s_area = r * r * 3.14 * (theta_deg / 360);
    printf("%f\n",s_area);

    return 0;
}
