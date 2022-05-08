/*
- fix warning and errors
- fix the code
- make N dynamic, let the user choose N
- remove unused
- make some improvements on your own
*/

#include <iostream>

 using namespace std;

int main()
{

    cout<<"Inserisci dimensione: ";
    int N;
    cin>>N;
    int a[N], i, j, temp;

      cout << "Insert array elements:\n";
      for (i = 0; i < N; i++)
      {
        cin >> a[i];
      }

      for (j = 0; j < N; j++)
      {
        for (i = 0; i < N; i++)
        {
          if (a[i] > a[i + 1])
          {
            temp = a[i];
            a[i] = a[i + 1] ;
            a[i + 1] = temp;
          }
        }
      }

      cout << "Sorted array by bubble sort:" << endl;
      for (i = 0; i < N; i++)
      {
        cout << a[i];
      }
}
