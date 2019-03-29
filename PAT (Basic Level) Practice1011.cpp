# include <iostream>
# include <stdio.h>
using namespace std;
// PAT (Basic Level) Practice 1011
/*
    1 存输入数据
    2 运算比较大小输出结果
*/

int main(){
    int t; // 输入测试样例个数
    long int num[3][10];
    // 输入
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> num[0][i] >> num[1][i] >> num[2][i];

    for(int i=0; i<t; i++){
        if(num[0][i] + num[1][i] > num[2][i])
            cout << "Case #" << i+1 << ": true" << endl;
        else
            cout << "Case #" << i+1 << ": false" << endl;
    }

    return 0;
}

