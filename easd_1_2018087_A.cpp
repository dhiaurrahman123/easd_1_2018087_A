//1. Membantu user untuk menentukan hasil yang tepat di berbagai macam step.
//2. Static, Dinamic
//3. Kecepatan proses, Compiler, Operating System, Bahasa Pemrograman, Ukuran Input
//4. Merge Sort, karena membagi 2 data sampai ukuran sama lalu digabungkan menjadi satu
//5. 
 
#include <iostream>
using namespace std;

int Wijaya[107];
int n;

void input() {
	while (true) {
		cout << "Masukkan panjang Arraynya : ";
		cin >> n;
		if (n <= 107)
			break;
		else
			cout << "\nMaksimum panjang adalah 107" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "---------------------" << endl;

	for (int i = 0; i < n; i++) {
		{
			cout << "<" << (i + 1) << ">";
			cin >> Wijaya[i];
		}
	}
}

void MergeSort(int low, int mid) {
	int i, DI, k;
	if (low >= mid)
		return;
	i = low;
	DI = mid + 1;
	k = low;

	while (DI > mid)
	{
		if (Wijaya[i] <= Wijaya[i]) {
			
		}
	}
}
void display()
{
	cout << "\n------------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "--------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << Wijaya[i] << " ";
	}
}

