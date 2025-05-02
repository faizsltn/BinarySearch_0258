#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maks 10): ";
        cin >> nPanjang;
        if (nPanjang <= 10) {
            break;
        } else {
            cout << "Array maksimal 10 elemen.\n";
        }
    }

    cout << endl;
    cout << "=====================\n";
    cout << "Masukkan elemen array\n";
    cout << "=====================\n";

    for (int i = 0; i < nPanjang; i++) {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}

void bubblesortArray() {
    for (int pass = 1; pass < nPanjang; pass++) {
        for (int j = 0; j < nPanjang - pass; j++) {
            if (element[j] > element[j + 1]) {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
    }
}

void display() {
    cout << "\n================================\n";
    cout << "Elemen Array yang telah tersusun\n";
    cout << "================================\n\n";

    for (int j = 0; j < nPanjang; j++) {
        cout << element[j];
        if (j < nPanjang - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
}


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
            cout << x <<  "Ditemukan" << mid <<  endl;
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
        input();
        bubblesortArray();
        display();
        binarySearch();
    }
}