#include<stdio.h>
//先让最小值和第一个数交换,再让最大值和第二个数交换
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[n-1];//变量加初始化一步到位是推荐的,但那是有具体的数据了,要直接拿来用的
    // 在刷题的时候思路不一样对变量进行初始化的值也会有改变,所以做题的时候初始化不初始化都可以
    // 最终目的还是把题给做出来,在做到大而难的题的时候可以写一些注释让自己的思路更清晰
    // 不至于做到一步然后忘了之前的事在干嘛了.
    int min = a[0];
    int temp;
    for(int i = 0; i < n ; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        	temp = i;//此时temp存储的是最小值的下标,可以用来直接进行与第一个值的交换
        }
    }
    a[temp] = a[0];//交换在循环外边确保交换的下标是最小值的下标
    a[0] = min;
    
    for(int i = 0; i < n ; i++)
    {
        if(max < a[i])
        {
            max = a[i];
	        temp = i;//存储的是最大值的下标
        }
    }
    a[temp] = a[n-1];
    a[n-1] = max;
    
    for(int i = 0; i < n; i++)
        printf("%d ",a[i]);
    return 0;
}
