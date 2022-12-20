#include <iostream>
using namespace std;

void printArray (int array[], int size){
for (int i=0; i < size; ++i){
cout << " " << array[i];
}
cout <<endl;
}
int search(int array[], int n, int x){
    for (int i=0; i<n; i++)
        if (array[i] == x)
        return i;
    return -1;
}
int binarySearch(int array[], int x, int awal, int akhir) {
    while (awal <= akhir){
        int tengah = awal+(akhir-awal)/2;

        if(array[tengah] == x)
            return tengah;
        if(array[tengah] < x)
            awal = tengah + 1;
        else
            akhir = tengah -1;
    }
return -1;
}
    void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
    array[j + 1] = array[j];
        --j;
    }
        array[j + 1] = key;
    }
}
int main(void){
    int n, x;
    cout << "Masukan jumlah data: ";
    cin >> n;
    int nilai[n];

    for (int i=0; i<n; i++)
        cin >> nilai[i];
    cout << "Array sebelum diurutkan: " << endl;
    printArray(nilai,n);
    cout << endl;
    cout << "Masukan data yang dicari: ";
    cin >> x;
    int result = search (nilai, n, x);
    cout << endl;
    cout<<"Pencarian Linear"<<endl;
    (result == -1)? cout << "Tidak ditemukan" : cout << "Elemen ditemukan pada index : " << result<<endl;
    insertionSort(nilai,n);

    cout << "Array sudah diurutkan secara ascending: " << endl;
    printArray(nilai,n);
     result = binarySearch(nilai, x, 0, n - 1);
     cout<<"\n\nPencarian Biner"<<endl;
    if (result == -1)
        cout << " Tidak ditemukan";
    else
        cout << "Elemen ditemukan pada indeks: " << result;

}
