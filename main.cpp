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
int gauss(int v[],int n){
    v[0]= 0;
    v[1]=3;
    v[2]=13;
    v[3]=34;
    for(int i = 4; i < n; i++){
        v[i]=4*v[i-1]-6*v[i-2]+4*v[i-3]-v[i-4];
    }
}
int main(int argc, char** argv) {
    //ejercicio13
    int v[1000];
    int n = 10;
    gauss(v,n);
    cout<<v[n-1]<<endl;
    return 0;
}

