# include <iostream>
# include <stdio.h>
# define N 1000
using namespace std;
// PAT (Basic Level) Practice 1010
/*
    1 处理输入数据
    2 按格式输出数据

    *** 题目的意思是每遇到一组指数和系数就输出
*/

int main(){
    int coef; // 存系数
    int index; // 存指数
    int flag = 0; // 标识第一位
    while(cin >> coef >> index){
        // 输出数据
        if(index != 0){ // 指数不为0
            if(flag == 0)
                cout << coef*index << " " << index-1;
            else
                cout << " " <<coef*index << " " << index-1;
            flag = 1;
        }
        if(flag == 0)
            cout << 0 << " " << 0;
    }
    return 0;
}

