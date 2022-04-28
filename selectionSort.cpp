#include <stdio.h>
#include "func.h"
int main() {
	int n;
	printf("nhap n = "); scanf("%d", &n);
	int Arr[n];
	InArr(Arr, n);	
//	selectionSortLow(Arr, n);
//	selectionSortUpp(Arr, n);
//	insertionSortUpp(Arr, n);
//	insertionSortLow(Arr, n);
//	interchangeSortUpp(Arr, n);
//	interchangeSortLow(Arr, n);
//	TestArrUpp(Arr, n);
//	TestArrLow(Arr, n);
	QuickSort(Arr,0,n);
	OutArr(Arr, n);
}
