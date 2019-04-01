# include <iostream>
# include <stdio.h>
# include <math.h>
# define N 10000
using namespace std;
// PAT (Basic Level) Practice 1013
/*
    1 计算到第n个素数，并将之间的每个素数记录到数组prim[]中
    2 从prim[m]开始输出至prim[n] 注意输出格式
*/

int isPrime(int n){
    if(n == 2)
        return 1;
    for(int i=2; i<sqrt(n)+1; i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int m, n;
    int counts = 0; // 记录素数个数
    int Prime[N+1] = {0};
    cin >> m >> n;
    // 从第一个素数2 开始判断至第m个素数
    for(int i=2; counts < n; i++){
        if(isPrime(i))
            Prime[counts++] = i;
    }
    // 输出
    for(int i=m-1, j=1; i<n; i++, j++){
        cout << Prime[i];
        if(j%10 != 0 && i!=n-1)
            cout << " ";
        else
            cout << endl;
    }

    return 0;
}

