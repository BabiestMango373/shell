//
//  main.cpp
//  шелл
//
//  Created by Andrey Scherbakov on 24.03.2024.
//

#include <iostream> 
using namespace std;
int main()
{
    int i, j, n, d, c;
    setlocale (LC_ALL, "Rus");
    srand (time (0));
    cout<<"Введите размер массива: ";
    cin >> n;
    int* mas = new int[n];
    cout << "Введите элементы массива: ";
    cout<<"\n";
    for (i = 0; i < n; i++)
    {
        cout<<i+1<<" элемент массива: ";
        cin>>mas[i];
    }
    cout <<endl<< "Maccив, получeнный путëм сортировки: ";
    d = n / 2;
    while (d > 0)
    {
        for (i=0; i<n-d; i++)
        {
            j = i;
            while (j >= 0 && mas[j] > mas [j + d])
            {
                c = mas[j];
                mas[j] = mas [j+d];
                mas [j+d] = c;
                j--;
            }
        }
        d = d / 2;
    }
    for (i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout<<"\n";
    return 0;
}
