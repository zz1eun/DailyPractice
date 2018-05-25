//
//  main.c
//  DailyPractice
//
//  Created by baejji on 2018. 4. 27..
//  Copyright © 2018년 baejji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int testCase, n, dp[12] = {}, i;

    dp[0] = 1;
    for(i=1; i<11; i++) {
        if(i-1>=0) dp[i] += dp[i-1];
        if(i-2>=0) dp[i] += dp[i-2];
        if(i-3>=0) dp[i] += dp[i-3];
    }
    
    scanf("%d", &testCase);
    while(testCase--) {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }

    return 0;
}

//no.2839
/*
int main(int argc, const char * argv[]) {
    int kg , count = 0;
    scanf("%d", &kg);
    
    while(1) {
        if(kg%5 == 0) {
            printf("%d", kg/5+count);
            break;
        } else if(kg<3){
            printf("-1");
            break;
        }
        count++;
        kg-=3;
    }
    
    return 0;
} */

//no.1915
/*
int min(int a, int b, int c) {
    a = a<b ? a : b;
    return a<c ? a : c;
}

int main(int argc, const char * argv[]) {
    int i, j, n, m, k=0, a[1001][1001];
    scanf("%d%d", &n, &m);
    
    char c[1001];
    for(i=1; i<=n; i++) {
        scanf("%s", c);
        for(j=1; j<=m; j++) {
            if(c[j-1] == '1') {
                a[i][j] = min(a[i-1][j-1], a[i-1][j], a[i][j-1]) + 1;
                k = k>a[i][j] ? k : a[i][j];
            }
        }
    }
    
    printf("%d", k*k);
    
    return 0;
}
*/

//no.9095
/*
int main(int argc, const char * argv[]) {
    int testCase, n, dp[12] = {}, i;
    
    dp[0] = 1;
    for(i=1; i<11; i++) {
        if(i-1>=0) dp[i] += dp[i-1];
        if(i-2>=0) dp[i] += dp[i-2];
        if(i-3>=0) dp[i] += dp[i-3];
    }
    
    scanf("%d", &testCase);
    while(testCase--) {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    
    return 0;
}*/





