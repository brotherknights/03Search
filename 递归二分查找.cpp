//#include"head.h"
//
//void BinarySearch(int arr[],int start,int end,int target) {
//	int temp;//标记
//	temp = (start+(end-start)) / 2;//防止加法溢出
//	int Mid=arr[temp];//中间值
//	if (Mid==target) {
//		printf("查找到目标值：%d",Mid);
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
//		printf("该数组中没有目标值");
//	}
//
//}
//
//int main() {
//	int arr[] = { 1,4,3,2,68,9,5 };
//	BinarySearch(arr,0,6,68);
//
//}