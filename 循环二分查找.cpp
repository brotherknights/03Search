//#include"head.h"
//
//void BinarySearch(int arr[], int start, int end, int target) {
//		int temp;//标记
//		temp = (start+end) / 2;
//		int Mid=arr[temp];//中间值
//	while (start <end) {
//		if (Mid==target) {
//			//终止条件
//			printf("查找到目标值：%d",Mid);
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
//	printf("没有找到目标值");
//	return;
//}
//
//int main() {
//	int arr[] = { 1,4,3,2,68,9,5 };
//	BinarySearch(arr,0,6,7);
//
//}