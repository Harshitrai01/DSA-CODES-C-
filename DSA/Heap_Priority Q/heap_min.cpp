#include <iostream>
using namespace std;

int left(int i){ return 2*i+1;}
int right(int i){ return 2*i+2;}
int parent(int i){ return i-1/2;}

void heapify(int arr[], int n, int i)
{
	int smallest = i;
	int l = left(i); 
	int r = right(i);
	if (l < n && arr[l] < arr[i])
		smallest = l;
	if (r < n && arr[r] < arr[smallest])
		smallest = r;
	if (smallest!=i) {
		swap(arr[i], arr[smallest]);
		heapify(arr, n, smallest);
	}
}

void buildHeap(int arr[], int n)
{
	
	int startIdx =(n/2)-1;
	for (int i=startIdx; i>=0;i--) {
		heapify(arr, n, i);
	}
}

void printHeap(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout <<endl;
}

int main()
{
	int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
	int n = sizeof(arr) / sizeof(arr[0]);
    int key=90;
	buildHeap(arr, n);
	printHeap(arr, n);
	return 0;
}
