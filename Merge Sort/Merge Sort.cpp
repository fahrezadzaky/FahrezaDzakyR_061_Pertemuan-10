//  Program Merge Sort
#include <iostream>
	using namespace std;
// Deklarasi void merge integer array, integer l, integer m, integer r
	void merge(int arr[], int l, int m, int r)
	{
	    int i, j, k;
	    int n1 = m - l + 1;
	    int n2 = r - m;
	
	    int L[n1], R[n2];
	
	    for (i = 0; i < n1; i++)
	        L[i] = arr[l + i];
	    for (j = 0; j < n2; j++)
	        R[j] = arr[m + 1 + j];
	
	    i = 0;
	    j = 0;
	    k = l;
	// Menggabungkan kedua bagian
	    while (i < n1 && j < n2)
	    {
	        if (L[i] <= R[j])
	        {
	            arr[k] = L[i];
	            i++;
	        }
	        else
	        {
	            arr[k] = R[j];
	            j++;
	        }
	        k++;
	    }
	// Masukkan semua nilai yang tersisa dari i ke mid ke temp
	    while (i < n1)
	    {
	        arr[k] = L[i];
	        i++;
	        k++;
	    }
	// Masukkan semua nilai yang tersisa dari j ke tinggi ke temp
	    while (j < n2)
	    {
	        arr[k] = R[j];
	        j++;
	        k++;
	    }
	}
	// Fungsi untuk membagi array menjadi dua bagian
	void mergeSort(int arr[], int l, int r)
	{
	    if (l < r)
	    {
	
	        int m = l + (r - l) / 2;
	
	        mergeSort(arr, l, m);
	        mergeSort(arr, m + 1, r);
	
	        merge(arr, l, m, r);
	    }
	}
	
	void show(int A[], int size)
	{
	    int i;
	    for (i = 0; i < size; i++)
	        cout << A[i] << " ";
	}
// memasukkan banyak data dan banyak array
	int main()
	{
	    int size;
	    cout << "\nMasukan Banyak Data : ";
	
	    cin >> size;
	
	    int arr[size];
	
	    for (int i = 0; i < size; ++i)
	    {
	        cout << "\nMasukan Data array ke "<<i<<" :";
	        cin >> arr[i];
	    }

	    mergeSort(arr, 0, size);
// hasil 
	    cout << "Hasil\n";
	    show(arr, size);
	    return 0;
	}
