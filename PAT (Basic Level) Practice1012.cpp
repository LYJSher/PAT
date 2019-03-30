# include <iostream>
# include <iomanip>
# include <stdio.h>
# define N 1000
using namespace std;
// PAT (Basic Level) Practice 1012
/*
    1 处理输入数据
    2 按要求进行运算并按照格式输出数据
*/

int main(){
    int n; // 记录数据个数
    int num[N] = {0}; // 存放输入数据
    int a1 = 0;
    int flag1 = 0; // 标记是否有满足条件的数
    int a2 = 0;
    int flag2 = 0; // 0时为加 1时为减实现交错求和
    float sum4 = 0; // 记录被5除余3的数的和
    int max5 = 0; // 每次更新最大值
    int fn[5] = {0}; // 被5除后余数的个数
    // 输入
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    // 处理数据
    for(int i=0; i<n; i++){
        int re = num[i] % 5; // 除5后的余数
        fn[re]++; // 更新余数个数
        // 求A1
        if(re == 0 && num[i]%2 == 0){
            a1 += num[i];
            flag1 = 1;
        }
        // 求A2
        else if(re == 1){
            flag2==0 ? a2+=num[i] : a2-=num[i];
            flag2 = (flag2+1) % 2; // 更新flag2
        }
        // 求A4过程中的累加和
        else if(re == 3)
            sum4 += num[i];
        // 求A5
        else if(re == 4){
            max5 = (max5 > num[i]) ? max5 : num[i];
        }
    }
    // 输出
    if(fn[0] != 0 && flag1)
        cout << a1 << " ";
    else
        cout << "N ";

    if(fn[1] != 0)
        cout << a2 << " ";
    else
        cout << "N ";

    if(fn[2] != 0)
        cout << fn[2] << " ";
    else
        cout << "N ";

    if(fn[3] != 0)
        cout << fixed << setprecision(1) << sum4/fn[3] << " ";
    else
        cout << "N ";

    if(fn[4] != 0)
        cout << max5;
    else
        cout << "N";

    return 0;
}

