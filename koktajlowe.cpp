#include <iostream>
using namespace std;
 void CocktailSort(int arr[], int n) {
    bool swapped = true;
     int start = 0;
      int end = n - 1;

     while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i+1]) {
                
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
             } 
          } 

        if (!swapped)
            break;

        swapped = false;

        --end;

        for (int i = end - 1; i >= start; --i) {
           if (arr[i] > arr[i+1]) {
                
                int temp = arr[i];
                 arr[i] = arr[i+1];
                  arr[i+1] = temp;
                   swapped = true;
               }
            }

           ++start;
        }
      }

  int main() {
    int arr[] = {72, 38, 55, 2, 42, 21, 123};
     int n = sizeof(arr)/sizeof(arr[0]);

    CocktailSort(arr, n);

    cout << "Sortowanie koktajlowe: ";
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
     }
    
    return 0;
}