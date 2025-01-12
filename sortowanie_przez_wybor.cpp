#include <iostream>

using namespace std;

int main()
{
    int tablica[5] = { 5,3,9,2,1 };
    int m, m_id;
    for (int i = 0; i < sizeof(tablica) / sizeof(tablica[0]); i++) {
        for (int j = i; j < sizeof(tablica) / sizeof(tablica[0]) - 1; j++) {
            if (i == j) {
                m = tablica[j];
                m_id = j;
            }
            if (m > tablica[j + 1]) {
                m = tablica[j + 1];
                m_id = j + 1;
            }
        }
        swap(tablica[i], tablica[m_id]);
    }
    cout << "Posortowana tablica: ";
    for (int i = 0; i < sizeof(tablica) / sizeof(tablica[0]); i++)
    {
        cout << tablica[i] << " ";
    }
}
