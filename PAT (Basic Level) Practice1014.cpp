# include <iostream>
# include <stdio.h>
# include <string.h>
# include <math.h>
# define N 60
using namespace std;
// PAT (Basic Level) Practice 1014
/*
    1 接收输入的四个字符串, 依次字符当字符相等且(字符-'A'+1)在范围1-7内，则应该输出相应day[]
    2 继续检测并计算对应小时
    3 检测第二对字符数组计算分钟
    **** 只能得18分找不到哪里出错
*/

int main(){
    char str1[N];
    char str2[N];
    char str3[N];
    char str4[N];
    int sl1, sl2, sl3, sl4;
    int d = 0; // 记录周几
    int h = 0; // 记录小时
    int m = -1; // 记录分钟
    string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    // 接收输入
    cin >> str1 >> str2 >> str3 >> str4;
    sl1 = strlen(str1);
    sl2 = strlen(str2);
    sl3 = strlen(str3);
    sl4 = strlen(str4);
    // 检测星期几和小时
    for(int i=0; i<sl1&&i<sl2; i++){
        char c = str1[i];
        if(c<='Z' && c>='A' && c == str2[i] ){
            if(d==0){
                if(c>='A' && c<='G')
                    d = c-'A'+1;
            }
            else if(h==0){
                if(c>='0' && c<='9')
                    h = c - '0';
                else if(c>='A' && c<='N')
                    h = c-'A'+10;
                break;
            }
        }
    }
    // 检测分钟
    for(int i=0; i<sl3&&i<sl4; i++){
        char c = str3[i];
        if(((c>='A'&&c<='Z') || (c>='a'&&c<='z')) && c == str4[i]){
            m = i;
            break;
        }
    }
    // 输出
    cout << day[d-1] << " ";
    if(h<10)
        cout << '0' << h << ":";
    else
        cout << h << ":";
    if(m<10)
        cout << '0' << m;
    else
        cout << m;
    return 0;
}

