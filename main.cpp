// NAMA          :Zulfikar Satria Allam Syahputra
// NRP          :5049221007
// Jurusan    :Teknologi Kedokteran

#include <iostream>
#include <cmath>
using namespace std;

int gravitasi = 10;

int speed_dgn_loss(int x)
{
    if (x<=10)
    {
        return 1;
    }
    else if (x>=11&&x<=20)
    {
        return 3;
    }
    else 
    {
        return 5;
    }
}

float mencari_V0(int x)
{
    return sqrt(x*10);    
}
int main()
{
    int n, jarak;
    float  kecepatan_tangensial;
    cin>>n;
    jarak = pow(n-speed_dgn_loss(n),2)*1/10;
    kecepatan_tangensial = mencari_V0(jarak) + speed_dgn_loss(mencari_V0(jarak));
    cout << jarak << " " << kecepatan_tangensial << endl;
    return 0;
}
