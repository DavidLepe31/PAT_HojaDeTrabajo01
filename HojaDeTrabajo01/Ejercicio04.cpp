#include "Ejercicio04.h"
#include<iostream>
using namespace std;
vector<string> Ejercicio04::generateParenthesis(int n)
{
    int n = n;
    int z = 4;
    int cont = 1;
    string* resultado = new string[100];
    string p = "(";
    string q = ")";
    string j = "()";
    for (int i = 1; i <= n; i++) {
        *(resultado + 0) += p + q;
    }
    std::cout << *(resultado + 0) << endl;
    if (n == 3) {
        *(resultado + 1) = j;
        for (int i = 0; i < n; i++) {
            *(resultado + 1) += p;

        }
        for (int i = 0; i < n; i++) {
            *(resultado + 1) += q;

        }
        std::cout << *(resultado + 1) << endl;
    }
    for (int i = 1; i <= n; i++) {
        *(resultado + 2) += p;
    }
    for (int i = 1; i <= n; i++) {
        *(resultado + 2) += q;
    }
    std::cout << *(resultado + 2) << endl;

    if (n == 3) {
        for (int i = 0; i < n; i++) {
            *(resultado + 3) += p;

        }
        for (int i = 0; i < n; i++) {
            *(resultado + 3) += q;

        }
        *(resultado + 3) += j;
        std::cout << *(resultado + 3) << endl;
    }
    if (n >= 4) {
        while (cont <= n - 2) {
            for (int i = 1; i <= cont; i++) {
                *(resultado + z) += p;

            }
            for (int i = 1; i <= (n - cont); i++) {

                *(resultado + z) += j;
            }
            for (int i = 1; i <= cont; i++) {
                *(resultado + z) += q;

            }
            cout << *(resultado + z) << endl;
            cont++;
            z++;
        }
        cont = 1;
        while (cont <= n - 2) {
            for (int i = 1; i <= (n - cont); i++) {
                *(resultado + z) += p;
            }
            for (int i = 1; i <= (n - cont); i++) {
                *(resultado + z) += q;
            }
            for (int i = 1; i <= cont; i++) {
                *(resultado + z) += j;
            }
            cout << *(resultado + z) << endl;
            z++;
            cont++;
        }
        cont = 2;
        while (cont <= n - 1) {
            for (int i = 1; i <= (n - cont); i++) {
                *(resultado + z) += j;
            }
            for (int i = 1; i <= cont; i++) {
                *(resultado + z) += p;
            }
            for (int i = 1; i <= cont; i++) {
                *(resultado + z) += q;
            }
            cout << *(resultado + z) << endl;
            z++;
            cont++;
        }
    }

    return vector<string>();
}
