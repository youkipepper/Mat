#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void showMatrix(double *arr, int len)
{
    cout << "( ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << ")" << endl;
}

int main()
{
    double Numb = 0;
    double temp;
    cout << "请输入扰动项：在[0,20]之间的整数：" << endl;
    while (true)
    {
        cin >> temp;
        if (temp >= 0 && temp <= 20)
        {
            Numb = temp;
            break;
        }
        cout << "请输入扰动项：在[0,20]之间的整数!" << endl;
    }

    double ess;
    cout << "请输入(0,1)之间的扰动常数：" << endl;
    cin >> ess;

    double ve[21];
    for (int i = 0; i < 21; i++)
    {
        ve[i] = 0;
    }
    int len = sizeof(ve) / sizeof(ve[0]);
    // showMatrix(ve, len);
    ve[20-(int)Numb]=ess;
    showMatrix(ve, len);
    


    return 0;
}
