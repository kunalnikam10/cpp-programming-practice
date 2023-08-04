#include<bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]< arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void Bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didSwap =0;
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
                didSwap =1;
            }
        if(didSwap==0){
            break;
        }
        }
    }
}

void Insertion_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j =i;
        while(j>0 && arr[j-1]> arr[j]){
            int temp= arr[j-1];
            arr[j-1]=arr[j];
            arr[j]= temp;

            j--;
        }
    }
}