#include <stdio.h>
#include <stdlib.h>
//дһ������,ʵ��һ��������������Ķ��ֲ���
int BinarySearch(int* arr, int size, int tofind){
	//[left, right] ����������
	int left = 0;
	int right = size - 1;
	//��int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//���right = 0, ���������ת��һ��ָ��.
	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] < tofind){
			//Ҫȥ�Ҳ�������
			left = mid + 1;
		}else  if (arr[mid] > tofind){
			//ȥ���������
			right = mid - 1;
		}else{
			//�ҵ���
			return mid;
		}
	}
	return -1;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(arr, size, 2);
	printf("ret = %d\n",ret);
	system("pause");
	return 0;
}