#include <stdio.h>

void selection_sort(int list[], int n);
int bsearch(int a[], int n, int key);

void main() {
	int arr[10];
	int founding;
	int location;
	int cond;

	for (int i = 0; i < 10; i++) {
		printf("배열 메모리의 %d번째 공간에 들어갈 정수 데이터를 입력하세요\n", i);
		scanf_s("%d", &arr[i]);
	}

	printf("데이터를 오름차순 정렬하여 입력하였는가?(0/1)\n");
	scanf_s("%d", &cond);

	if (cond==0)
		selection_sort(arr, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}


	printf("\n위치를 확인하고 싶은 정수 데이터를 입력하세요\n");
	scanf_s("%d", &founding);


	location = bsearch(arr, 10, founding);

	if (location >= 0)
		printf("%d의 배열에서의 위치는 %d입니다.", founding, location);
	else if(location==-1)
		printf("not exist");
}

void selection_sort(int list[], int n) {
	int s, m, j, temp;
	for (s = 0; s < n - 1; s++) {
		m = s;
		for (j = s + 1; j < n; j++) {
			if (list[j] < list[m])
				m = j;
		}
		temp = list[s];
		list[s] = list[m];
		list[m] = temp;
	}
}

int bsearch(int a[], int n, int key) {
	int mid;
	int left = 0, right = n - 1;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (key > a[mid])
			left = mid + 1;
		else if (key < a[mid])
			right = mid - 1;
		else
			return mid;

	}
	return -1;
}