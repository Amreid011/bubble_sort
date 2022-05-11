
#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<iomanip>
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
//by : Amr Eid


void printarr(int arr[] , int s) {
    for(int i=0;i<s;i++){
        cout<<setw(5)<<arr[i];
    }
    cout<<endl;
}

void swap1 (int &x , int &z) {
    int temp = z;
    z = x;
    x = temp;
}

void babllesort (int arr[] , int s) {
    for(int i=0;i<s;i++){
        for(int j=0;j<s-1;j++){
            if(arr[j]>arr[j+1])
                swap1(arr[j],arr[j+1]);
        }
    }
}

int main (){  
    fastread();
    int c = 11;
    int array[c]={2,6,8,4,00,66,885,-3,-67,5,6};
    printarr(array , c);
    babllesort (array , c);
    printarr(array , c);
    return 0;
}
