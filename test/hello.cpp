#include<iostream>
using namespace std;
const int SIZE = 10;
int main()
{
    double donation[SIZE];
    cout << "Enter the donation value: \n";
    int i;
    double sum = 0.0;
    while(i<SIZE && cin>>donation[i])
    {
        sum += donation[i];
        i++;
    }
    double avg = sum / i;
    int uper;
    for (int j = 0; j < i;j++)
    {
        if(avg<donation[i])
            uper++;
    }
    cout << "Avg: " << avg << endl;
    cout << "Count: " << uper << endl;
    return 0;
}