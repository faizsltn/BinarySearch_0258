#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void binarySearch()
{
    cout << "Masukkan element yang mau di cari = ";
    cin >> x;
    int low = 0;
    int high = nPanjang - 1;
    do
    {

        int mid = (low + high) / 2;
        if (element[mid] == x)
        {
            cout << "Ditemukan" << endl;
        }
        if (x < element[mid])
        {
            high = mid - 1;
        }
        if (x < element[mid])
        {
            low = mid + 1;
        }
        while (low <= high);
        if (low > high)
        {}
        cout << x << "Tidak ditemukan" << endl;
    }

    int main()
    {
    }