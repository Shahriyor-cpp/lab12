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

//#6
int main()
{
    int a;
    cin>>a;
    int *pa =&a;
    *pa=*pa * *pa;
    cout<<*pa;
}

//#7
int main()
{
    int arr[5]={1,2,3,4,5};
    int *parr = arr;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(parr);
}
//#8
int main()
{
    int a = 5;
    void* pa=&a;
    cout<<(int*)pa;
    cout<<*(int*)pa;
}
//#9
int max(int* arr, int size){
    int* parr =arr;
    int maximum =*parr;
    for(int i =1; i<size;i++){
        parr++;
        if(*parr>maximum){
            maximum=*parr;
        }
    }
    return maximum;
}
int main()
{
    int arr[]={3,4,7,5,0,99,79};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int maximum = max(arr,size);
    cout<<maximum;
    return 0;
}
//#10
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b;
    int *pa =&a;
    int *pb =&b;
    cout<<pa<<" "<<pb;
}

//#11
int max(int* arr, int size){
    int* parr =arr;
    int maximum =*parr;
    for(int i =1; i<size;i++){
        parr++;
        if(*parr>maximum){
            maximum=*parr;
        }
    }
    return maximum;
}
int main()
{
    int size;
    cin>>size;
    int arr[size]={ };
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maximum = max(arr,size);
    cout<<maximum;
}
//#12
 #define val 33.3;
 #define number 50;
 int a;
 int& fun(){
 return a;
 }
 int foo(){
 return a;
 }
 int main() {
 int n1=9,n2=11, *ptr_1=nullptr, *ptr_2=nullptr, k=0;
 double t;
 //*ptr_1=&n1;
 ptr_1=&n2;
 //*ptr_2=&n2;
 ptr_2=&n1;
 t=val;
 //k=val;
 //foo()=number;
 fun()=number;
 cout<<a<<" "<<*ptr_2<<" "<<t<<" "<<*ptr_1<<endl;
 }

//#13
int main(){
    int arr[10]={1,2, 5,6,7,80,45,23,24,56};
    int*parr=arr;
    for (int i =0;i<10;i++){
        cout<<(parr+i)<<endl;
        cout<<*(parr+i)<<endl;
    }
}
//#14
int main(){
    int a;
    cin>>a;
    int *pa=&a;
    //cout<<pa<<endl;
    cout<<*pa;
}
//#15
int main(){
    int size;
    cin>>size;
    int arr[size]={ };
    int* parr=arr;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        parr = parr+i;
    }
    cout<<*parr;
}

//#16
int main(){
    int score =75;
    int* pscore =&score;
    int newScore = *pscore+10;
    cout<<*pscore<<" "<<newScore; 
}
//#17
void reverse(int*arr,int size){
    int*start =arr;
    int*end =arr+size-1;
    while(start<end){
        int temp =*start;
        *start=*end;
        *end=temp;
        *start++;
        *end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size =sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//#18

int main()
{
    int size;
    cin>>size;
    int arr[size]={ };
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int *high1 =&arr[0];
    int *high2 =&arr[0];
    int *high3 =&arr[0];
    for(int i =0;i<size;i++){
        if(arr[i]>*high1){
            high3=high2;
            high2=high1;
            high1=&arr[i];
        }else if(arr[i]>*high2){
            high3=high2;
            high2=&arr[i];
        }else if(arr[i]>*high3){
            high3=&arr[i];
        }
    }
    cout<<*high1<<" "<<*high2<<" "<<*high3;
}

//#19
 int*countDigits(const int&number){
    int count[10]={0};
    int a=number;
    while(a!=0){
        int num =a%10;
        count[num]++;
        a=a/10;
    }
    return count;
 }
 int main(){
    int number=123567999;
    int*count=countDigits(number);
    for (int i = 0; i < 10; i++) {
        cout<< count[i] << endl;
    }
 }
