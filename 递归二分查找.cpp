//#include"head.h"
//
//void BinarySearch(int arr[],int start,int end,int target) {
//	int temp;//���
//	temp = (start+(end-start)) / 2;//��ֹ�ӷ����
//	int Mid=arr[temp];//�м�ֵ
//	if (Mid==target) {
//		printf("���ҵ�Ŀ��ֵ��%d",Mid);
//		return;
//	}
//	else if(Mid>target){
//		end = temp-1;
//		Mid = arr[(start+end)/2];
//		return BinarySearch(arr, start,end,target);
//	}
//	else if (Mid<target) {
//		start = temp+1;
//		Mid = arr[(start + end) / 2];
//		return BinarySearch(arr, start, end, target);
//	}
//	else {
//		printf("��������û��Ŀ��ֵ");
//	}
//
//}
//
//int main() {
//	int arr[] = { 1,4,3,2,68,9,5 };
//	BinarySearch(arr,0,6,68);
//
//}