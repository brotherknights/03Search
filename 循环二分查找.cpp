//#include"head.h"
//
//void BinarySearch(int arr[], int start, int end, int target) {
//		int temp;//���
//		temp = (start+end) / 2;
//		int Mid=arr[temp];//�м�ֵ
//	while (start <end) {
//		if (Mid==target) {
//			//��ֹ����
//			printf("���ҵ�Ŀ��ֵ��%d",Mid);
//			break;
//		}
//		else if(Mid > target){
//			end = temp-1;
//			Mid = arr[(start+end)/2];
//		}
//		else if (Mid < target) {
//			start = temp+1;
//			Mid = arr[(start + end) / 2];
//		}
//	}
//	printf("û���ҵ�Ŀ��ֵ");
//	return;
//}
//
//int main() {
//	int arr[] = { 1,4,3,2,68,9,5 };
//	BinarySearch(arr,0,6,7);
//
//}