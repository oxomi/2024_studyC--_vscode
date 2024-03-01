#include <iostream>

// int& add(int& a, int& b){
//     int sum = a+b;
//     int& ret_val = sum;

//     return ret_val;
// }

int& add(int& a, int& b){
    int sum = a+b;
    // int& ret_val = sum;

    return sum;
}

int main(){
    int a=10;
    int b=10;

    int& result = add(a,b);
    std::cout << result << std::endl;
    return 0;
}