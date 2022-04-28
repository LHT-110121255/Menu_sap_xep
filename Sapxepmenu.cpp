#include<stdio.h>
#include<conio.h>
#include<windows.h>

void nhap(int a[100], int n);
void xuat(int a[100], int n);
void Swap(int &a, int &b);

void selectionsort(int a[100], int n);                 		 void selectionsort2(int a[100], int n);
void insertionsort(int a[100], int n);                 		 void insertionsort2(int a[100], int n);
void interchangesort(int a[100], int n);               		 void interchangesort2(int a[100], int n);
void BubbleSort(int a[100], int n);	                   		 void BubbleSort2(int a[100], int n);

void Shift (int a[], int left, int right);             		 void Shift2 (int a[], int left, int right);
void CreateHeap(int a[], int n);   		  	           		 void CreateHeap2(int a[], int n);
void HeapSort (int a[], int n);                            	 void HeapSort2 (int a[], int n);

void QuickSort(int a[], int left, int right);           	 void QuickSort2(int a[], int left, int right);

int main()
{   system("cls");
	int a[100], n, m, c;

	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
    nhap(a,n);
    xuat(a,n);

    printf("\n1 Selectionsort" ); printf("\n2 Insertionsort "); printf("\n3 Interchangesort");printf("\n4 BubbleSort"); printf("\n5 HeapSort");printf("\n6 QuickSort");  printf("\nChon thuat toan: "); 
	scanf("%d", &m);
    switch (m)
	{ 
	case 1:
         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	selectionsort(a,n);
				xuat(a,n);
			 break;
		 case 2:
			 	selectionsort2(a,n);
				xuat(a,n);
			 break;
		 default:
			 break;
		 }
		break;
	case 2:
         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	insertionsort(a,n);
   		        xuat(a,n);
			 break;
		 case 2:
			 insertionsort2(a,n);
   		     xuat(a,n);
			 break;
		 default:
			 break;
		 }
		break;
    case 3:
         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	interchangesort(a,n);
		        xuat(a,n);
			 break;
		 case 2:
			 	interchangesort2(a,n);
		        xuat(a,n);
			 break;
		 default:
			 break;
		 }
		break;

		break;
	case 4:
         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	BubbleSort(a,n);
	            xuat(a,n);
			 break;
		 case 2:
			 	BubbleSort2(a,n);
	            xuat(a,n);
			 break;
		 default:
			 break;
		 }

		break;
	case 5:
		  printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			 	Shift(a,1,n);
		        CreateHeap(a,n);
		        HeapSort(a,n);
		        xuat(a,n);
			 break;
		 case 2:
		        Shift2(a,1,n);
		        CreateHeap2(a,n);
		        HeapSort2(a,n);
		        xuat(a,n);
			 break;
		 default:
			 break;
		 }

		break;
		break;
	case 6:
		  printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
		 switch (c)
		 {
		 case 1:
			QuickSort(a,1,n);
            printf("\nSau khi sx:\n");
	        xuat(a,n);
			 break;
		 case 2:
			QuickSort2(a,1,n);
            printf("\nSau khi sx:\n");
	        xuat(a,n);
			 break;
		 default:
			 break;
		 }
	
		break;
		break;
	
	default:
		break;
	}

	return 0;
}

void nhap(int a[100], int n)
{
   for(int i=1;i<=n;i++)
   {
	   printf("nhap phan tu a[%d]: ", i);
	   scanf("%d", &a[i]);
   }
}

void xuat(int a[100], int n)
{
   for(int i=1;i<=n;i++)
   {
	   printf("%d\t", a[i]);
   }
}
//ham swap
void Swap(int &a, int &b)
{
     int temp = a;
     a  = b;
     b = temp;
}

// 1.selection sort (tang)
void selectionsort(int a[100], int n)
{   printf("\nSau khi sx:\n");
	int min;
	for(int i=1;i<=n-1; i++)
	{
		min =i;
		for(int j=i+1; j<=n;j++)
			if(a[j]<a[min])
				min = j;
        Swap(a[min], a[i]);
	}
}


//2.insertionsort(tang)
void insertionsort(int a[100], int n)
{printf("\nSau khi sx:\n");
	int pos, i;
	int x;
	for(i=1;i<=n;i++)
	{
		x=a[i];
		pos=i-1;
		while((pos>=0) && (a[pos] > x))
		{
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}

//3.interchangesort(tang)
void interchangesort(int a[100], int n)
{   printf("\nSau khi sx:\n");
    int i,j;
	for(i=1;i<n;i++)
		for(j=i+1; j<=n;j++){
			if(a[i]>a[j])	  
			  Swap(a[i],a[j]);
		}      
}

//4.bublesort(tang)
void BubbleSort(int a[], int n)
{printf("\nSau khi sx:\n");
int i, j;
	for (i = n ; i>1 ; i--)
		for (j =1; j<i ; j++)	
			if(a[j]> a[j+1])
			Swap(a[j], a[j+1]);

}


//5.Heapsort(tang)
void Shift (int a[], int left, int right)
{
	int x, curr, joint;
	curr = left; joint =2*curr;// ajoint: phaàn töû lieân ñôùi
	x = a[curr];
	while (joint <= right)
		{
		if (joint < right) // neáu coù ñuû 2 phaàn töû lieân ñôùi
			if (a[joint] < a[joint+1])
				joint = joint+1;
					if (a[joint]<  x) break; //thoaû quan heä lieân ñôùi
					else
					{
						a[curr] = a[joint];
						curr = joint; // xeùt tieáp khaû naêng hieäu chænh lan truyeàn
						joint = 2*curr;
					}
					a[curr] = x; // cải tiến
		}
}


void CreateHeap(int a[], int n)
{
	int left; //left: vị trí phần tử cần ghép thêm
	for (left = (n)/2; left >= 1; left --)
		Shift(a, left, n);
}


void HeapSort (int a[], int n)
{	
	printf("\nSau khi sx:\n");
	int right;
	CreateHeap(a, n); //saép xeáp daõy a thanh hea
	right = n; // right laø vò trí ñuùng cho phaàn töû lôùn nhaát
	while (right > 1)
		{
		Swap(a[1],a[right]);
		right --;
		Shift(a,1,right);
		}
}

//Quicksort(tang)
void QuickSort(int a[], int left, int right)
{	
	
	int	i, j, x;
  	if (left >= right)
	return;
 	x = a[(left+right)/2]; // choïn phaàn töû giöõa laøm giaù trò moác
	i = left; j = right;
	while(i <= j)
		{
			while(a[i] < x) i++;
			while(a[j] > x) j--;
				if(i <= j)
					{
					Swap(a[i], a[j]);
					i++ ; j--;
					}
		}
	QuickSort(a, left, j);
	QuickSort(a, i, right);
}


//Sap xep giam dan

//1.selection sort (giam)
void selectionsort2(int a[100], int n)
{   printf("\nSau khi sx:\n");
	int min;
	for(int i=1;i<=n-1; i++)
	{
		min =i;
		for(int j=i+1; j<=n;j++)
			if(a[j]>a[min])
				min = j;
        Swap(a[min], a[i]);
	}
}


//2.insertionsort2(giam)
void insertionsort2(int a[100], int n)
{printf("\nSau khi sx:\n");
	int pos, i;
	int x;
	for(i=1;i<=n;i++)
	{
		x=a[i];
		pos=i-1;
		while((pos>=0) && (a[pos] < x))
		{
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}

//3.interchangesort(giam)
void interchangesort2(int a[100], int n)
{   printf("\nSau khi sx:\n");
    int i,j;
	for(i=1;i<n;i++)
		for(j=i+1; j<=n;j++){
			if(a[i] < a[j])	  
			  Swap(a[i],a[j]);
		}      
}

//4.bublesort(giam)
void BubbleSort2(int a[], int n)
{printf("\nSau khi sx:\n");
int i, j;
	for (i = n ; i>1 ; i--)
		for (j =1; j<i ; j++)	
			if(a[j] < a[j+1])
			Swap(a[j], a[j+1]);

}

//5.Heapsort(giam)
void Shift2 (int a[], int left, int right)
{
	int x, curr, joint;
	curr = left; joint =2*curr;// ajoint: phaàn töû lieân ñôùi
	x = a[curr];
	while (joint <= right)
		{
		if (joint < right) // neáu coù ñuû 2 phaàn töû lieân ñôùi
			if (a[joint] > a[joint+1])
				joint = joint+1;
					if (a[joint] > x) break; //thoaû quan heä lieân ñôùi
					else
					{
						a[curr] = a[joint];
						curr = joint; // xeùt tieáp khaû naêng hieäu chænh lan truyeàn
						joint = 2*curr;
					}
					a[curr] = x; // cải tiến
		}
}


void CreateHeap2(int a[], int n)
{
	int left; //left: vị trí phần tử cần ghép thêm
	for (left = (n)/2; left >= 1; left --)
		Shift2(a, left, n);
}


void HeapSort2 (int a[], int n)
{	
	printf("\nSau khi sx:\n");
	int right;
	CreateHeap2(a, n); //saép xeáp daõy a thanh hea
	right = n; // right laø vò trí ñuùng cho phaàn töû lôùn nhaát
	while (right > 1)
		{
		Swap(a[1],a[right]);
		right --;
		Shift2(a,1,right);
		}
}


//Quicksort(giam)
void QuickSort2(int a[], int left, int right)
{	
	
	int	i, j, x;
  	if (left >= right)
	return;
 	x = a[(left+right)/2]; // choïn phaàn töû giöõa laøm giaù trò moác
	i = left; j = right;
	while(i <= j)
		{
			while(a[i] > x) i++;
			while(a[j] < x) j--;
				if(i <= j)
					{
					Swap(a[i], a[j]);
					i++ ; j--;
					}
		}
	QuickSort2(a, left, j);
	QuickSort2(a, i, right);
}


