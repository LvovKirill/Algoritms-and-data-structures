#include <iostream>
#include <algorithm>
#include <vector>

// Фибоначи рекурсия
int Fibonacci(int n){
    if (n==0 || n==1){
        return 1;
    } else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

// Фибоначи не рекурентный алгоритм
int FibonacciNotRecursive(int n){
    if (n == 0){
        return 1;
    }
    int prev = 1;
    int current = 1;
    for (int i=1; i<=n; i++){

    }
}



int BinSearch(int arr[], int num){
    int low = 0;
    int high = 3;


    if (arr[low] == num){
        return low;
    }

    if (arr[high] == num){
        return high;
    }

    while (low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == num){
            return mid;
        }else if(arr[mid] < num){
            low = mid;
        }else if(arr[mid] > num){
            high = mid;
        }
    }

}

using namespace std;

int main(){
    int arr[] = {2, 4, 21, 25};
    int n = BinSearch(arr, 25);
    std::cout << n;
}
