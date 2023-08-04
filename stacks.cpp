#include<bits/stdc++.h>
using namespace std;

// class Stack{
//     public:
    
//     int *arr;
//     int top;
//     int size;

//     stack(int size){
//         arr= new int[size];
//         this -> size = size;
//         top = -1;
//     }

//     void push(int element){
//     if(size - top >1){
//         top++;
//         arr[top]= element;
//     }
// }
//     void pop(){
//         if(top>=0){
//             int ans = arr[top];
//             top--;
//             return ans;
//         }
//         else{
//             cout << "stack underflow"<< endl;
//         }
//     }
//     int peek(){
//         if(top>=0 && top < size){
//             return arr[top];
//         }
//         else{
//             cout << "stack empty"<< endl;
//             return -1;
//         }
//     }
//     bool isempty(){
//         if(top = -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

int main(){

    string str ="Kunal";

    stack<char> s;

    for(int i=0; i<str.length(); i++){
        char ch= str[i];
        s.push(ch);
    }
    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    cout<< "reverse is "<< ans << endl;


    return 0;
}