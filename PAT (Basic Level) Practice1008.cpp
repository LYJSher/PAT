# include <iostream>
# define N 100
using namespace std;
// PAT (Basic Level) Practice 1008
/*
    1 整体逆序
    2 移位位数和剩余位数分别逆序
    *** 注意处理环位数超过序列长度的情况
*/

void rever(int num[], int r, int l){ // 数组num中从r到l逆序
    int temp;
    for(int i=r, j=l; i<j; i++,j--){
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
}

int main(){
    int n; // 序列数目
    int m; // 循环右移位数
    int num[N]; //数序列
    cin >> n >> m;
    // 输入
    for(int i=0; i<n; i++)
        cin >> num[i];

    m %= n; // ****处理循环位数超过序列长度的情况
    // 整体逆序
    rever(num, 0, n-1);
    // 部分分别逆序
    rever(num, 0, m-1);
    rever(num, m, n-1);
    for(int i=0; i<n; i++){
        cout << num[i];
        if(i<n-1)
            cout << ' ';
    }
}
