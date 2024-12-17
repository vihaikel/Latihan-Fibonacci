#include <iostream>

using namespace std;

int main()
{
    // f_n = f_n1 + f_n2
    cout << "===Deret Fibonacci===" << endl;

    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "\n Menggunakan For Loop====" << endl;
    cout << "Masukkan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << " ";
    for (int i = 1; i < n; i++)
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << " ";
    }
    cout << "\nAkhir For Loop===\n" << endl;

    
    cout << "\n Menggunakan While Loop====\n";
    int a;
    int f_a;
    int f_a1;
    int f_a2;
    int b;
    cout << "Masukkan angka ke-a: ";
    cin >> a;
    b = 1;

    f_a1 = 1;
    f_a2 = 0;
    f_a = f_a1 + f_a2;
    cout << f_a << " ";
    while (b < a)
    {
        f_a = f_a1 + f_a2;
        f_a2 = f_a1;
        f_a1 = f_a;
        cout << f_a << " ";
        b++;
    }
    return(0);
} 
