// 2301089

// library include
#include <stdio.h>

// main
int main(void){
    // 変数作成(配列不使用制限)
    int x1 = 3,x2 = x1 + 1,x3 = x1 + 2,ab = 0,rmx = 0,rmy = 0,i1,i2,i3;
    char AB = 'A';

    // 初期値
    printf("1 :");
    for (i1 = 0;i1 < x1;i1 ++){
        printf("*");
    }
    printf("\n2 :");
    for (i2 = 0;i2 < x2;i2 ++){
        printf("*");
    }
    printf("\n3 :");
    for (i3 = 0;i3 < x3;i3 ++){
        printf("*");
    }
    printf("\n");
    
    // 石がなくなるまで繰り返し
    while (x1 + x2 + x3 != 0){
        // プレイヤーAB判定
        if (ab % 2 == 0){
            AB = 'A';
        } else {
            AB = 'B';
        }
        printf("player %c : Enter the pile number and the number of stones to remove.\n",AB);
        scanf("%d%d",&rmy,&rmx);
        // 取り除く数0以下
        if (rmx <= 0){
            printf("player must remove at least one stone.\n");
            continue;
        } else {
            switch (rmy){
            case 1:
                if (x1 < rmx){
                    printf("There are no %d stones at pile of number %d.\n",rmx,rmy);
                    continue;
                } else {
                    x1 -= rmx;
                    ab ++;
                    break;
                }
            case 2:
                if (x2 < rmx){
                    printf("There are no %d stones at pile of number %d.\n",rmx,rmy);
                    continue;
                } else {
                    x2 -= rmx;
                    ab ++;
                    break;
                }
            case 3:
                if (x3 < rmx){
                    printf("There are no %d stones at pile of number %d.\n",rmx,rmy);
                    continue;
                } else {
                    x3 -= rmx;
                    ab ++;
                    break;
                }
            default:
                printf("The pile number is not found.\n");
        }

        // 現状表示
        printf("1 :");
        for (i1 = 0;i1 < x1;i1 ++){
            printf("*");
        }
        printf("\n2 :");
        for (i2 = 0;i2 < x2;i2 ++){
            printf("*");
        }
        printf("\n3 :");
        for (i3 = 0;i3 < x3;i3 ++){
            printf("*");
        }
        printf("\n");
        }
    }
    
    // 勝者表示
    printf("player %c, you won!\n",AB);

    return 0;
}