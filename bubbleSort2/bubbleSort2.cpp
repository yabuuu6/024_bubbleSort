#include <iostream>
using namespace std;


int arr[20];           //Deklarasi array a dengan ukuran 20
int n;               //Deklarasi variable n untuk menyimpan banyaknya elemen pada array


void input() {       //Method untuk input
    while (true) {   //Looping
        cout << "Masukan array banyaknya elemen pada array : "; //Output ke layar
        cin >> n;    //Input dari pengguna
        if (n <= 20) //Jika n kurang dari atau sama dengan 20
            break;   //Keluar dari loop
        else {       //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar
        }
    }
    cout << endl;                            //Output baris kosong
    cout << "====================" << endl;  //Output ke layar
    cout << "Masukan Elemen Array" << endl;  //Output ke layar
    cout << "====================" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {     //Looping ddengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> arr[i];                  //Input dari pengguna
    }
}

void display() { //Method untuk menampilkan hasil
    cout << endl;                            //Output baris kosong
    cout << "=================================" << endl;  //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output ke layar
    cout << "=================================" << endl;  //Output ke layar
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;                                         //Output ke layar
}

void bubbleSortArray() { //Method untuk mengurungkan array dengan metode bubble sort
    int pass = 1; //step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass" << pass - 1 << ": "; //number of pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";  //menampilkan data pada number of pass
        }
        cout << endl;
    } while (pass <= n - 1);
}


int main() {
    //Membuat objek obj dari class Bubblesort
    input();            //Memanggil read() dari class Bubblesort
    bubbleSortArray();  //Memanggil bubbleSortArray() dari class BubbleSort
    display();          //Memanggil display() dari class BubbleSort
    return 0;
}