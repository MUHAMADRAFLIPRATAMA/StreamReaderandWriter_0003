#include <iostream>
#include <exception>
// unntuk obyek exeption yant akan di gunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try {
        array<int, 3> data = {1, 2, 3};
        //pesan array integer 3 elemen
        cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan di eksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program yang terakhir" << endl;
    /*penanda 2: bahwa pogram berjalan tanpa berhenti meskipun terjadi kesalahan*/
    
    return 0;
}