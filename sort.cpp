#include <iostream>
using namespace std;
int main()
{  

    int n = 5;
    int a[n];
    cout << "enter the element";
    for (int i = 0; i <= n; i++)
    {
            cin >> a[i];
    }
    for (int k = 1; k <= n -1; k++){
        int ptr = 1;
        while (ptr <= n-k){
            if (a[ptr]> a[ptr+1]){
                int temp;
                temp = a[ptr];
                a[ptr] = a[ptr+1];
                a[ptr+1] = temp;
            }
            else{
                ptr = ptr+1;
            }
        }
    }

    cout << "<--------------------------------->" << endl;
    for (int i = 0; i <= n; i++)
    {
            cout << a[i] << "\t";
        }
            cout << endl;
    
}