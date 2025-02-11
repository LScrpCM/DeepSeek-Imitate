#include <iostream>
#include<cstring>
#include <windows.h>
using namespace std;
void DeepSeekImitate() {
    string inp;
    string oup="服务器繁忙，请稍后再试";
    cout << "User: ";
    cin >> inp;
    Sleep(1000);
    cout << "Assistant: " << "思考中..." << endl;
    Sleep(2000);
    cout << "Assistant: " << "------------------------------" << endl;
    cout << "Assistant: " << "| 嗯" << endl;
    Sleep(10000);
    cout << "Assistant: " << "------------------------------" << endl;
    cout << "Assistant: " << oup << endl;
    Sleep(1000);
    DeepSeekImitate();
}
int main()
{
    DeepSeekImitate();

}