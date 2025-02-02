//2301089

// library include
#include <stdio.h>

// main
int main(void){
    // 変数作成
    int i = 0,n = 0;
    double in = 0,all = 0,ave = 0;

    // 個数入力
    scanf("%d",&n);

    // 数値入力
    for (i = 1; i <= n; i += 1){
        scanf("%lf",&in);
        all += in;
    }
    
    // 計算出力
    ave = all / n;
    printf("average : %lf\n",ave);

    return 0;
}