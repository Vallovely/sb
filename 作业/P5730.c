#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char a[4*n][5];//最后一列的 不输出即可
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%1d", &x[i]);
        switch (x[i])
        {
        case 0:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]='*',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]=' ',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]='*',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 1:
            a[4*i][0]=' ',a[4*i+1][0]=' ',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]=' ',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]=' ',a[4*i+1][2]=' ',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]=' ',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]=' ',a[4*i+1][4]=' ',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 2:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]=' ',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]='*',a[4*i+1][3]=' ',a[4*i+2][3]=' ',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 3:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]=' ',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]=' ',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 4:
            a[4*i][0]='*',a[4*i+1][0]=' ',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]='*',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]=' ',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]=' ',a[4*i+1][4]=' ',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 5:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]='*',a[4*i+1][1]=' ',a[4*i+2][1]=' ',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]=' ',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 6:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]='*',a[4*i+1][1]=' ',a[4*i+2][1]=' ',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]='*',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 7:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]=' ',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]=' ',a[4*i+1][2]=' ',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]=' ',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]=' ',a[4*i+1][4]=' ',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 8:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]='*',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]='*',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        case 9:
            a[4*i][0]='*',a[4*i+1][0]='*',a[4*i+2][0]='*',a[4*i+3][0]=' ';
            a[4*i][1]='*',a[4*i+1][1]=' ',a[4*i+2][1]='*',a[4*i+3][1]=' ';
            a[4*i][2]='*',a[4*i+1][2]='*',a[4*i+2][2]='*',a[4*i+3][2]=' ';
            a[4*i][3]=' ',a[4*i+1][3]=' ',a[4*i+2][3]='*',a[4*i+3][3]=' ';
            a[4*i][4]='*',a[4*i+1][4]='*',a[4*i+2][4]='*',a[4*i+3][4]=' ';
            break;
        default:
            break;
        }
    }
    for(int j=0;j<=4;j++){
        for(int i=0;i<=4*n-2;i++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}