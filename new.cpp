#include<bits/stdc++.h>
using namespace std;

void Pair(){
    pair <int,int>p = {1,2};
    cout << p.second << " and " << p.first;

    cout << endl;
    pair<int,int>num[]={{1,2},{3,4},{2,9}};
    cout << num[1].second;
}

void Vectors(){
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    vector<pair<int,int>> vec;
    vec.emplace_back(1,2);
    vec.emplace_back(3,4);
    
    // cout << v[0] << " " << vec[1].second;
    // cout << v.back();

    vector<int>::iterator it = v.end();
    it--;
    cout << *(it) << " " << endl;
    

    for(auto it = v.begin(); it < v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    v.erase(v.begin()+1, v.begin()+4);

    for(auto it : v){
        cout << it << " ";
    }

}

int cnt =0;
void Recurr(){
    
    if(cnt ==4) return;

    cout << cnt << endl;
    cnt++;
    Recurr();
}

void PrintNameNtimes(int i,int n){
    if(i>n) return;

    cout<< "raj" << i << endl;
    
    PrintNameNtimes(i+1,n);
}

void PrintLinearly(int i, int n){
    if(i>n) return;

    cout << i << endl;
    PrintLinearly(i+1,n);
}

void PrintReverse(int i, int n){
    if(i<1) return;

    cout << i << endl;
    PrintReverse(i-1,n);
}

void LinearBacktrack(int i, int n){
    if(i<1) return;

    LinearBacktrack(i-1,n);
    cout << i << endl;
}

void ReverseBacktrack(int i,int n){
    if(i>n) return;

    ReverseBacktrack(i+1,n);
    cout<< i << endl;
}

// Parameterised way
void SumOfN(int n, int sum){
    if(n<1) {
        cout<< sum;
        return;
    }
    SumOfN(n-1,sum+n);    
}

// functional way
int sumofNFunctional(int n){
    if(n==0) return 0;

    return n+sumofNFunctional(n-1);
}

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

void reverseArrayusingrecursion(int i,int n,int arr[]){
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    reverseArrayusingrecursion(i+1,n,arr);
}
void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}

bool palindromeusingreccursion(int i, string &s){
    if(i>= s.size()/2) return true;
    
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindromeusingreccursion(i+1,s);
}
char toLowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}
bool palindrome(char fname[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(toLowercase(fname[i])!=toLowercase(fname[j])) return 0;
        else{
            i++;
            j--;
        }
    }
    return 1;
}

int fib(int n){
    if(n<=1) return n;

    int last = fib(n-1);
    int slast = fib(n-2);

    return last + slast;
}




int getlength(char fname[]){
    int cnt=0;
    for(int i=0;fname[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}

void reversestring(char fname[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(fname[i++],fname[j--]);
    }
}

void pointers(int *p){
    cout<< *p<< endl;
    cout<< p<< endl;
}
int sumat(int arr[], int n){
    if(n==0 ){
        return 0;
    }
    if(n==1 ){
        return arr[0];
    }
    int s;
    
    int a = sumat(arr+1, n-1);
    s = arr[0] + a;
    return s;
}

int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = sumat(arr, n);
    
    cout<< ans << endl;

    // int x,y;
    // cout << "Enter x: ";
    // cin >> x;
    // cout << "Enter y: ";
    // cin >> y;
    // cout << "Value of x: " << x << " and y:" << y;
    // return 0;

    // string name;
    // cout << "Enter your full name: ";
    // getline(cin , name);
    // cout << "Your name is " << name << ".";

    // if-else
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if(age<18) {
    //     cout << "Not eligible for job";
    // }
    // else if(age<58){
    //     cout << "Eligible for job";
    //     if(age>54){
    //         cout << ", but retirement soon";
    //     }
    // }
    // else {
    //     cout << "Retirement time!!!";
    // }
    
    // NUMBER HASHING
    
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }

    // int hash[13]= {0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]] +=1;
    // }

    // int q;
    // cin >> q;
    // for(int e=0;e<q;e++){
    //     int number;
    //     cin >> number;
    //     cout<< hash[number] << endl;
    // }

    // CHARACTER HASHING

    // string s;
    // cin >> s;

    // int hash[26]= {0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i] - 'a'] +=1;
    // }

    // int q;
    // cin >> q;
    // for(int e=0;e<q;e++){
    //     char c;
    //     cin >> c;
    //     cout<< hash[c - 'a'] << endl;
    // }

// NUMBER HASHING USING MAP

// int n;
// cin >> n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin >> arr[i];
// }

// map<int,int> mpp;
//     for(int i=0;i<n;i++){
//     mpp[arr[i]]++;
// }

// for(auto it : mpp){
//     cout << it.first <<"->"<< it.second << endl;
// }

// int result = 0;
// for(auto it:mpp) {
//  result = max(result, it.second);
// }
// // cout << ?????? ;   

// int q;
// cin >> q;
// while(q--){
//     int number;
//     cin >> number;

//     cout << mpp[number] << endl;
// }    

// SELECTION SORT

// BINARY SEARCH INPUT
    // int even[6]={1,2,3,4,5,6};
    // int odd[5]={1,2,3,4,5,};

    // int evenindex= Binary_search(even,6,3);
    // cout << "for even index is "<< evenindex << endl;
    // int oddindex= Binary_search(odd,5,2);
    // cout << "for odd index is "<< oddindex;

// STRING OPERATIONS
    // char fname[20];
    // cin >> fname;
    // cout<<"your name is "<< fname << endl;
    // int len = getlength(fname);
    // cout << "the len is " << len << endl;

    // reversestring(fname,len);
    // cout<< "reverse is "<< fname << endl;

    // cout<< palindrome(fname,len);

    // return 0;

// POINTERS
    // int value=5;
    // int *p=&value;

    // cout<< &value<< endl;
    // pointers(p);

// OOPS
    // node ram;
    // ram.name='R';
    // ram.roll=41;
    // cout<< ram.name<< endl;
    // cout<< ram.roll<< endl;

    // node* i=new node();
    // (*i).name='I';
    // (*i).roll=60;
    // cout<<(*i).name<<endl;
    // cout<<(*i).roll<< endl;

    // i->name='K';
    // i->roll=90;
    // cout<<i->name<<endl;
    // cout<<i->roll<<endl;

    // node sample;

    
    
}