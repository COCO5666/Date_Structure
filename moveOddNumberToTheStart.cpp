/*
已知线性表按顺序存储，且每个元素都是不相同的整数型元素，设计把所有奇数移动到所有偶数前边的算法（要求时间最少，辅助空间最少）
*/

#include <iostream>

using namespace std;

void moveOddNumberToTheStart(int a[], int n);

int main()
{
    //int a[] = {7,4,8,1,2};
    //int a[] = {1,2,3,4,6};
    //int a[] = {1,2,4};
    int a[] = {1,2,5,7,4};
    int n = sizeof(a)/sizeof(a[0]);
    moveOddNumberToTheStart(a, n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
}
void moveOddNumberToTheStart(int a[], int n)
{
    int temp,l=0,r=n-1;
    while(l<r)
    {
        while(a[l]%2!=0)    //找出左起第一个不是奇数的数字下标
        {
            l++;
        }
        while(a[r]%2==0)    //找出右起第一个不是偶数的数字下标
        {
            r--;
        }
        if(l>r)
        {
            break;
        }
        if(a[l]%2==0&&a[r]%2!=0)
        {
            temp=a[l];a[l]=a[r];a[r]=temp;
            l++;r--;
        }
    }
}
