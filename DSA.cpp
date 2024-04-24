// #include <iostream>
// using namespace std;

// int main() {
//     int rows;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     for(int i = 1; i <= rows; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int row;
//     cout << "Enter the number of Rows: ";
//     cin >> row;

//     for(int i = 1; i <= row; i++) {
//         for(int j = 1; j <= row; j++) {
//             if(i == 1 || i == row || j == 1 || j == row) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int rows;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     for(int i = 1; i < rows; i++) {
//         for(int j = 1; j < rows; j++) {
//             if(i == 1 || j == 1 || j == (rows-i-0)) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;

//     for (int i = 1; i <= 100; ++i) {
//         sum += i;
//     }

//     cout << "The sum of numbers from 1 to 100 is =>  " << sum << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int numInputs;
//     cout << "Enter the number of inputs: ";
//     cin >> numInputs;

//     int sum = 0;
//     if (numInputs == 2) {
//         int input1, input2;
//         cout << "Enter two integers: ";
//         cin >> input1 >> input2;
//         sum = input1 + input2;
//     } 
    
//     if (numInputs == 3) {
//         int input1, input2, input3;
//         cout << "Enter three integers: ";
//         cin >> input1 >> input2;
//         sum = input1 + input2 + input3;
//     } 

//     if (numInputs == 4) {
//         int input1, input2, input3, input4;
//         cout << "Enter four integers: ";
//         cin >> input1 >> input2;
//         sum = input1 + input2 + input3 + input4;
//     } 

//     else {
//         for (int i = 0; i < numInputs; ++i) {
//             int input;
//             cout << "Enter an integer: ";
//             cin >> input;
//             sum += input;
//         }
//     }

//     cout << "Sum of the inputs: " << sum << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of inputs: ";
//     cin >> n;

//     int* inputs = new int[n];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter number " << (i + 1) << ": ";
//         cin >> inputs[i];
//     }

//     int sum = 0;
//     cout << "Total: ";
//     for (int i = 0; i < n; i++) {
//         sum += inputs[i];
//         cout << inputs[i];
//         if (i < n - 1) {
//             cout << " + ";
//         }
//     }
//     cout << " = " << sum << endl;

//     delete[] inputs;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int x = 5;
//     cout << ++x << endl;
//     cout << x++ << endl;

// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//      cout<<"size of int is "<<sizeof(int)<<endl;
//      cout<<"size of float is "<<sizeof(float)<<endl;
//      cout<<"size of double is "<<sizeof(double)<<endl;
//      cout<<"size of char is "<<sizeof(char)<<endl;
//      return 0;
// }


// int main(){
//      int marr[3];
//      int currentValue = 0;
//      for(int i=0; i<3; i++){
//           cout<<"enter first number";
//           cin>>marr[i];
//      }
//      for(int i=0; i<3; i++){
//           if(marr[i]>currentValue){
//                currentValue = marr[i];
//           }
//      }
//      cout<<"largest value is "<<currentValue;

//      return 0;
// }


// int main(){
//      int marr[] = {1,2,3,4,5,6};
//      int sum = 0;
//      for(int i=0; i<sizeof(marr)/sizeof(int); i++){
//           sum = sum+marr[i];
//      }
//      cout<<"sum of all array value is "<<sum;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int coffi1 = 100;
//     int coffi2 = 250;
//     int coffi3 = 300;
//     string choose;
//     int quantity;

//     cout << "(A) Cold Coffi = 100rs" << endl;
//     cout << "(B) Hot Coffi = 250rs" << endl;
//     cout << "(C) Black Coffi = 300rs" << endl;

//     cout << "Enter your choice: (A), (B), (C) " << endl;
//     cin >> choose;

//     if (choose == "A" || choose == "a") {
//         cout << "Your choice is Cold Coffi : " << coffi1 * (100 + 18) / 100 << "rs" << endl;
//         cout << "How much you need to buy?" << endl;
//         cin >> quantity;
//         cout << (coffi1 * (100 + 18) / 100 ) * quantity << "rs."<< endl;
//     } else if (choose == "B" || choose == "b") {
//         cout << "Your choice is Hot Coffi : " << coffi2 * (100 + 18) / 100 << "rs" << endl;
//         cout << "How much you need to buy?" << endl;
//         cin >> quantity;
//         cout << (coffi1 * (100 + 18) / 100 ) * quantity << "rs."<< endl;
//     } else if (choose == "C" || choose == "c") {
//         cout << "Your choice is Black Coffi : " << coffi3 * (100 + 18) / 100 << "rs" << endl;
//         cout << "How much you need to buy?" << endl;
//         cin >> quantity;
//         cout << (coffi1 * (100 + 18) / 100 ) * quantity << "rs."<< endl;
//     }
//     else{
//         cout << "Error: Invalid choise quantity please try again. ^_~" << endl;
//     }

//     return 0;
// }






// January - 31 days
// February - 28 days in a common year and 29 days in leap years
// March - 31 days
// April - 30 days
// May - 31 days
// June - 30 days
// July - 31 days
// August - 31 days
// September - 30 days
// October - 31 days
// November - 30 days
// December - 31 days

// #include <iostream>
// using namespace std;

// int main(){
//     int salry;
//     int month;

//     cout << "Enter your salary :  ";
//     cin >> salry;

//     cout << "Enter month's days : ";
//     cin >> month;

//     if(month == January || month == March || month == May || month == July || month == August || month == October || month == December){
//         // this all are 31 days
//         for(int i = 0; i < 31; i++){
            
//         }
//     }
//     else if(month == April || month == June || month == Saptember || month == November){
//         // this all are 30 days
//     }
//     else if(month == February){
//         // this is 29 days
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     double Salary;
//     int totalDays;
//     int Loss;
//     int halfDays ;
//     double perDaySalary;
//     double monthlySalary;

//     cout << "Enter the salary: ";
//     cin >> Salary;
//     cout << "Enter the total days in the month: ";
//     cin >> totalDays;
//     cout << "Enter the number of Loss days: ";
//     cin >> Loss;
//     cout << "Enter the Half days :  ";
//     cin >> halfDays;

    

//     perDaySalary = Salary / totalDays;
    
//     int calculthalf = ((0.5)*halfDays)*perDaySalary;

//     monthlySalary = Salary - ((perDaySalary*Loss)+calculthalf);

//     cout << "Monthly salary: " << monthlySalary << "Rs." << endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>

// // Function to generate all prime numbers up to n
// void sieveOfEratosthenes(int n) {
//     // Create a boolean array "prime[0..n]" and initialize
//     // all entries it as true.
//     std::vector<bool> prime(n + 1, true);

//     for (int p = 2; p * p <= n; p++) {
//         // If prime[p] is not changed, then it is a prime
//         if (prime[p]) {
//             // Update all multiples of p
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

//     // Print all prime numbers
//     std::cout << "Prime numbers up to " << n << " are:\n";
//     for (int p = 2; p <= n; p++) {
//         if (prime[p])
//             std::cout << p << " ";
//     }
//     std::cout << std::endl;
// }

// int main() {
//     int num;
//     std::cout << "Enter a number: ";
//     std::cin >> num;
//     sieveOfEratosthenes(num);
//     return 0;
// }




// #include <iostream>
// #include <algorithm>

// // Function to find GCD (using std::gcd from <algorithm>)
// int findGCD(int a, int b) {
//     return std::gcd(a, b);
// }

// // Function to find LCM (using std::lcm from <algorithm>)
// int findLCM(int a, int b) {
//     return (a * b) / std::gcd(a, b);
// }

// int main() {
//     int num1, num2;
//     std::cout << "Enter two numbers: ";
//     std::cin >> num1 >> num2;

//     int gcd = findGCD(num1, num2);
//     int lcm = findLCM(num1, num2);

//     std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;
//     std::cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << std::endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the number of data: ";
//     cin >> size;

//     int arr[size];

//     for (int i = 0; i < size; i++) {
//         cout << "Enter a number: ";
//         cin >> arr[i];
//     }

//     for (int i = size-1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void area(float radius_circle) {
//     float area_circle = 3.14 * radius_circle * radius_circle;
//     cout << "Area of the circle: " << area_circle << endl;
// }

// int main() {
//     float radius;
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;
//     area(radius);
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int inp;
    cout << "Enter the length of array: ";
    cin >> inp;

    int arr[inp];

    for(int i = 0; i < inp; i++) {
        int input;
        cout << "Enter the input for arr[" << i << "]: ";
        cin >> input;
        arr[i] = input * 2;
    }

    cout << "Array elements after multiplication by 2:" << endl;
    for (int i = 0; i < inp; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int inp;
    cout << "Enter the length of array: ";
    cin >> inp;

    int arr[inp];

    for(int i = 0; i < inp; i++) {
        int input;
        cout << "Enter the input for arr[" << i << "]: ";
        cin >> input;
        arr[i] = 1;
    }

    cout << "Array elements after Assign by 1:" << endl;
    for (int i = 0; i < inp; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


































































