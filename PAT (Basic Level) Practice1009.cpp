# include <iostream>
# include <stdio.h>
# define N 80
using namespace std;
// PAT (Basic Level) Practice 1009
/*
    1 当输入不为结束符时 将每次读入的单词放入字符串数组中，并记录单词数
    2 逆序输出
    ** scanf()函数读入%s 也是以空格符换行符等结束
*/

int main(){
    char str[N][N];
    int counts = 0;
    // 输入
    while(scanf("%s",str[counts]) != EOF){
        counts++;
    }
    // 输出
    for(int i=counts-1; i>=0; i--){ // 这里i=counts-1接受最后的换行符 保证格式正确
        cout << str[i];
        if(i != 0)
            cout << " ";
    }
    return 0;
}


