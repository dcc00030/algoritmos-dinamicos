/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: L1pc
 *
 * Created on 21 de abril de 2016, 10:48
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
void tarificacion(int v[][1000], int n, int T) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < T; j++) {
            if (i == 0) {
                v[i][j] = 0;
            }
            if (j == 0) {
                v[i][j] = 1;
            } else {
                if (i > j) {
                    v[i][j] = v[i - 1][j];
                } else {
                    v[i][j] = v[i - 1][j] + v[i][j - i];
                }
            }
        }
    }
}

int main(int argc, char** argv) {
    //ejercicio15
    int v[1000][1000];
    int n = 12; //formas de franquear
    int T = 20; //cantidad a franquear
    tarificacion(v, n, T);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 20; j++) {
            if (j == 19) {
                cout << v[i][j] << endl;
            } else {
                cout << v[i][j]<< " ";
            }
        }
    }
    return 0;
}

