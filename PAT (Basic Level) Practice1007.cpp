# include <iostream>
# include <math.h>
# define N 100001

using namespace std;
// PAT (Basic Level) Practice 1007
/*
    1 查找判断出N以内的素数
    2 遍历数组 当当前数为素数时 寻找下一个素数与之差是否为2
    3 若为2 素数对计数加1
*/

int isPrime[N] = {0};

int main(){
    int n; // 输入的正整数
    int now = 3, next = 5; // 指向当前素数和下一个素数
    int counts = 0; // 计数素数对
    // 输入正整数n
    cin >> n;
    // 初始化素数
    isPrime[0] = isPrime[1] = 0;
    isPrime[2] = 1;
    for(int i=3; i<n+1; i++){
        if(i%2 == 0)
            isPrime[i] = 0;
        else
            isPrime[i] = 1;
    }
    // 记录素数
    for(int i=3; i<=sqrt(n); i++){
        if(isPrime[i])
            for(int j=2*i; j<=n; j+=i)
                isPrime[j] = 0;
    }
    // 遍历素数
    if(now < n){
        for(int i=5; i<=n; i++){
            if(isPrime[i] == 1){
                next = i;
                if((next - now) == 2)
                    counts++;
                now = next; // 更新当前素数
            }
        }
    }
    cout << counts;
}
