#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

void pattern3(int n){
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern4(int n){
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << i+1;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>n-i;j--)
        {
            cout << "#";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout << "*";
        }
        for(int j=0;j<i+1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){
    int k =1;
    for(int i=0;i<n;i++){
        if(i%2==0) k=1;
        else k=0;
        for(int j=0;j<=i;j++){
            cout << k;
            k=1-k;
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=1;j<=n-2*i+4;j++){
            cout << " ";
        }
        for(int j=0;j<i;j++){
            cout << i-j;
        }
        cout << endl;
    }
}

void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num=num+1;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+n-1-i;ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n){
    char j='A';
    for(int i=1;i<=n;i++){
        for(int e=1;e<=i;e++){
            cout << j << " ";
        }
        j='A'+i;
        cout << endl;
    }
}

void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        char e = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout << e;
            if(j<=breakpoint) e++;
            else e--;
        }
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout <<endl;
    }
}