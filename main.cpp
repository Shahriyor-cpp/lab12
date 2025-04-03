#include <iostream>
using namespace std;

//#1

// int main() {
//     int n;
//     cin>>n;
//     int *ptr=&n;
//     cout<<n<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
// }

//#2

// int main() {
//     int num=20;
//     int *pnum=&num;
//     cout<<*pnum<<endl;
//     int a;
//     cin>>a;
//     *pnum=a;
//     cout<<*pnum<<endl;
// }

//#3

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     cout << *a << " " << *b << endl;
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     swap(&a, &b);
// }

//#4

// int main() {
//     int arr[5]={1,289,3,4976,5};
//     int *pArr=arr;
//     for(int i=0;i<5;i++) {
//         cout<<*(pArr+i)<<endl;
//     }
// }

//#5

int main() {
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;
    int * middle = p+ length / 2;
}