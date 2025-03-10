//Ïðîãðàììà äëÿ ðåøåíèÿ çàäàíèÿ ðàáîòû 7
#include <iostream> // cin, cout
#include <iomanip> // setw
#include <ctime> // rand

using namespace std;

void create_array(double**& matrix, int n) {
    if (matrix) { 
        for (int i = 0; i < n; i++)
            delete[]matrix[i];
        delete[]matrix;
    }

    matrix = new double* [n]; 
    for (int i = 0; i < n; i++) 
        matrix[i] = new double[n];
}

void fill_array(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = int((rand() * 101.0 / RAND_MAX - 50.0) * 100 + 0.5) / 100.0;
        }
    }
}

void print_array(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(8) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    setlocale(0, "");
    srand(time(NULL));

    int n;
    double** matrix = nullptr; //Îáúÿâëåíèå óêàçàòåëÿ íà ìàññèâ óêàçàòåëåé
    cin >> n;
    cout << endl;
    create_array(matrix, n);
    fill_array(matrix, n);
    print_array(matrix, n);
    print_array(matrix, n);
    return 0;
}
//MATUSHKA ZEMLA \pregnrewognewrgolregnepo;e ng
