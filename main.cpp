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
void pd(int v[], int n){
    v[0]=3;
    v[1]=3;
    for(int i = 2; i < n; i++){
        if((i%2)== 0){
            v[i]=v[i-2]+3;
        }else{
            v[i]=v[i-1]-3;
        }
    }
}
int main(int argc, char** argv) {
    //ejercicio14
    int v[100];
    int n = 10;
    pd(v,n);
    cout<<v[n-1]<<endl;
    return 0;
}

