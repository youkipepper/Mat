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
    cout << "�������Ŷ����[0,20]֮���������" << endl;
    while (true)
    {
        cin >> temp;
        if (temp >= 0 && temp <= 20)
        {
            Numb = temp;
            break;
        }
        cout << "�������Ŷ����[0,20]֮�������!" << endl;
    }

    double ess;
    cout << "������(0,1)֮����Ŷ�������" << endl;
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
