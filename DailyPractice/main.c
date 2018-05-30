//
//  main.c
//  DailyPractice
//
//  Created by baejji on 2018. 4. 27..
//  Copyright © 2018년 baejji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    return 0;
}

#pragma mark - 1149
/*
int min(int a, int b) {
    return a<b ? a : b;
}

int main(int argc, const char * argv[]) {
    int n, cost[1001][3] = {0}, i, j, dp[1001][3] = {0};
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for(j=0; j<=2; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    
    for(i=1; i<=n; i++) {
        for(j=0; j<=2; j++) {
            dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i][1];
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i][2];
        }
    }
    
    printf("%d", min(min(dp[n][0], dp[n][1]), dp[n][2]));
    
    return 0;
}*/

#pragma mark - 1932
/*
int max(int a, int b) {
    return a>b ? a : b;
}

int main(int argc, const char * argv[]) {
    int n, dp[501][501] = {0}, i, j, res = 0;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            scanf("%d", &dp[i][j]);
            
            if(j==1) {
                dp[i][j] += dp[i-1][j];
            } else if(j==i){
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]);
            }
            
            if(res<dp[i][j]) {
                res = dp[i][j];
            }
        }
    }
    printf("%d", res);
    
    return 0;
}
 */

#pragma mark - 2597
/*
int max(int a, int b) {
    return a>b ? a : b;
}

int main(int argc, const char * argv[]) {
    int i, n, dp[301][2] = {0}, stair[301] = {0};
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        scanf("%d", &stair[i]);
    }
    
    dp[1][0] = dp[1][1] = stair[1];
    
    for(i=2; i<=n; i++) {
        dp[i][0] = dp[i-1][1] + stair[i];
        dp[i][1] = max(dp[i-2][0], dp[i-2][1]) + stair[i];
    }
    
    printf("%d", max(dp[n][0], dp[n][1]));
    
    return 0;
}*/

# pragma mark - 2839
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

# pragma mark - 1915
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

# pragma mark - 9095
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





