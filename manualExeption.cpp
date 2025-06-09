#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;
    }
    catch (int a){
        //blok ini akan di eksekusi
        cout << "pengecualian akan di eksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka blok ini akan dieksekusi*/
        cout << "default pengecualian diexsekusi" << endl;
    }

    return 0;
}