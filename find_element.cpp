// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60, 80, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int searchElement;
//     cout << "Enter the element you want to search for: ";
//     cin >> searchElement;

//     bool found = false;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == searchElement) {
//             cout << "Element found at index " << i << endl;
//             found = true;
//             break;
//         }
//     }

//     if (!found) {
//         cout << "Element not found in the array." << endl;
//     }

//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 0, 0, 1, 0, 3, 5, 1, 0, 4, 0, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int count0 = 0;
//     int count1 = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0)
//             count0++;
//         else if (arr[i] == 1)
//             count1++;
//     }

//     cout << "Number of Zero's in the array: " << count0 << endl;
//     cout << "Number of One in the array: " << count1 << endl;

//     return 0;
// }







// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter your length for inputs :  ";
//     cin >> n;
//     int arr[n];
//     int start = 0;
//     int end = n - 1;

//     for(int i = 0; i < n; i++){
//         cout << "Enter your value for store : ";
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n; i++){
//         if(start > n-1){
//             return 0;
//         }
//         else{
//             cout << arr[start];
//             cout << arr[end];
//             start++;
//             end--;
//         }
//     }
// }







// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the length for inputs: ";
//     cin >> n;
//     int arr[n];
//     int start = 0;
//     int end = n-1;

//     int i = 0;
//     while (i < n) {
//         cout << "Enter the value for storage: ";
//         cin >> arr[i];
//         i++;
//     }

//     i = 0;
//     while (i < n) {

//         if(start > end){
//             break;
//         }
//         else{
//             cout << arr[start] << " ";
//             cout << arr[end] << " ";
//             start++;
//             end--;
//         }
//     }

//     return 0;
// }













































































































































































