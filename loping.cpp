#include <iostream>
using namespace std;

int main() 
{
    int n; "masukan jumlah data: ";
    cout << "masukan jumlah data: ";
    cin >> n;

    int jumlahganjil = 0;
    int jumlahgenap = 0;

    for (int i=1;i<n; ++i) {

        if (i % 2 == 0){
            jumlahganjil += i;
        }
        else {
            jumlahgenap += i;
        }
    }
        cout << "jumlah total bilangan genap: " << jumlahganjil << endl;
        cout << "jumlah total bilangan ganjil: " << jumlahgenap << endl;

}