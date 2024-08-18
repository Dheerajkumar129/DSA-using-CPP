//Assignment - Day 6. Here's what you need to do:

//Practice the concepts and problems covered in the lectures.

#include<iostream>
using namespace std;

int main(){
    // int arr[5] = {2,4,5,7,9}; //declaration & initialization

    // cout << "Before " << arr[4] << endl;
    // arr[4] = 90;
    // cout << "After " << arr[4] << endl;

    // for (int i : arr){
    //     cout << i << " ";
    // }


    //Take user input, store in an array and print it
    // int arr[7];

    // cout << "Enter 7 numbers: " << endl;
    // for(int i = 0; i < 7; i++){
    //     cin >> arr[i];
    // }

    // cout << "Numbers are: " << endl;

    // for (int i = 0; i < 7; i++){
    //     cout << arr[i] << " ";
    // }


    //calculate the sum of all the inputted mumbers of array 

    int arr[7];
    int sum = 0;

    cout << "Enter 7 numbers: " << endl;
    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }

    cout << "Numbers are: " << endl;

    for (int i = 0; i < 7; i++){
        sum += arr[i];
        cout << arr[i] << " " << endl;
    }

    cout << "Sum of all the numbers is: " << sum << endl;

}


/*
Advantages
1. Efficiency
2. Memory Optimization
*/


/*
Disadvantages
1. Fixed size or difficult to resize
2. Insertion & Deletion
3. Lack of key-value pair
*/



//Find the largest in an array
#include<iostream>
using namespace std;

int find_largest(int arr[], int size){
    int max = INT16_MIN;

    for (int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int find_second_largest(int arr[], int size){
    int max = INT16_MIN, s_max = INT16_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max) max = arr[i];
    }

    for(int i = 0; i < size; i++){
        if(arr[i] != max && arr[i] > s_max){
            s_max = arr[i];
        }
    }

    return s_max;
}

int main(){
    int arr[5] = {1, 2, 8, 4, 5};

    // cout << "Largest Number is: " << find_largest(arr, 5) << endl;

    cout << "Second largest element is: " << find_second_largest(arr, 5) << endl;
}
