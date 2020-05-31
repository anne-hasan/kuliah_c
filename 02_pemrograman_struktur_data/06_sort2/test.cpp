// Prograg Pengurutan Quick Sort
#include <iostream>
#include <iomanip>
using namespace std;

void q_sort (int [], int, int);
int main () {
	int NumList [9]={65,2,44,26,19,22,5,3,12};
	cout << " Data Sebelum diurutkan : \n";
	for(int d=0; d<9; d++) {
	cout << setw(3) << NumList [d]; }
	cout << endl;
	cout << endl;
	q_sort(NumList,0,9);
	cout << " Data Setelah diurutkan : \n";
	for(int iii=0;iii<9;iii++)
	cout << setw(3) << NumList[iii] << endl;
	cin.get(); }

void q_sort (int numbers[], int left, int right) {
	int pivot, l_hold, r_hold;
	l_hold=left;
	r_hold=right;
	pivot=numbers[left];
	while(left<right)	{
	while((numbers[right]>=pivot)&&(left<right))
	right--;
	if(left!= right)	{
	numbers[left]=number[right];
	left++; }
	while((number[left]<=pivot)&&(left<right))	{
	left++;	}
	if (left!=right)	{
	numbers[right]=numbers[left];
	right--; }	}
	numbers[left]=pivot;
	pivot=left;
	left=l_hold;
	right=r_hold;
	if(left<pivot)
	q_sort(numbers,left,pivot-1)
	if(right>pivot)
	q_sort(numbers,pivot+1,right); }