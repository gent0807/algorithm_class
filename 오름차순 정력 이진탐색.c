#include <stdio.h>

void selection_sort(int list[], int n);
int bsearch(int a[], int n, int key);

void main() {
	int arr[10];
	int founding;
	int location;
	int cond;

	for (int i = 0; i < 10; i++) {
		printf("�迭 �޸��� %d��° ������ �� ���� �����͸� �Է��ϼ���\n", i);
		scanf_s("%d", &arr[i]);
	}

	printf("�����͸� �������� �����Ͽ� �Է��Ͽ��°�?(0/1)\n");
	scanf_s("%d", &cond);

	if (cond==0)
		selection_sort(arr, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}


	printf("\n��ġ�� Ȯ���ϰ� ���� ���� �����͸� �Է��ϼ���\n");
	scanf_s("%d", &founding);


	location = bsearch(arr, 10, founding);

	if (location >= 0)
		printf("%d�� �迭������ ��ġ�� %d�Դϴ�.", founding, location);
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