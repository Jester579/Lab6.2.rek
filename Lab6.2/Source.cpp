#include <iostream>
#include <ctime>  
#include <iomanip> 
using namespace std;

const int SIZE = 10; 

void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}

int El(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] % 2 == 1) ? 1 : 0) + El(mas, size, i + 1); 
}

int SUM(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] % 2 != 0) ? mas[i] : 0) + SUM(mas, size, i + 1); 
}

int main() {
    srand((unsigned)time(0)); 
    setlocale(LC_CTYPE, "ukr");

    int a[SIZE]; 

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE); 

    int sum = SUM(a, SIZE); 
    int count = El(a, SIZE);

    if (count > 0) {
        cout << "Середнє арифметичне непарних елементiв: " << (double)sum / count << endl;
    }

    return 0;
}
