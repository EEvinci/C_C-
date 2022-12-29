#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    /**
     * 将字符串数组赋给字符串
    char op[12] = {"lichenshuai"};
    string lic;
    lic = op;
    cout << lic << endl;

    int op_len = strlen(op);
    cout << op_len << endl;

    int lic_len = lic.size();
    cout << lic_len;
    */

    /**
     * vector的begin(),end(),max_element(),min_element()方法
    vector<int> v(10,10);
    // 使用迭代器访问vector定义的数组
    for(auto it = v.begin(); it != v.end(); it++){
        // cout << *it << " ";
    }

    // 使用begin()获取v的起始位置的数值
    cout << *v.begin() << endl;
    // end()指向数组最后一位的下一个位置,越界位置,所以迭代访问数组元素的终止条件是!=v.end()
    // cout << *v.end() << endl;

    // 改变v中的元素大小
    for(int i = 0; i < v.size(); i++){
        v[i] = i;
        cout << v[i];
    }
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++){
        // v[*it] = *it;
        // cout << v[*it] << " ";
    }


    int maxPosition;
    int minPosition;
    int max;
    int min;

    // 获取最小/大值
    max = *max_element(v.begin(),v.end());
    cout << max << endl;
    // 获取最小/大值的下标
    maxPosition = min_element(v.begin(), v.end()) - v.begin();
    cout << maxPosition << endl;
    */

    /**
     * 测试创建vector<int> v存储数组中的元素的ASCII码大小顺序
    string key = "acbd";

    for(int i = 0; i < key.length(); i++){
        if(key[i] >= '0' && key[i] <= '9'){
            key[i] -= '0';
        }
        else if(key[i] >= 'a' && key[i] <= 'z'){
            key[i] -= 'a';
        }
        else if(key[i] >= 'A' && key[i] <= 'Z'){
            key[i] -= 'A';
        }
    }

    vector<int> v(key.size(), 0);
    int count = 0;

    for (int i = 0; i < key.size(); i++)
    {
        for (int j = 0; j < key.size(); j++)
        {
            if (key[i] > key[j])
            {
                count++;
            }
        }
        v[i] = count;
        count = 0;
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
     */

    /**
        * 获取vector第一个和最后一个元素的数值
       cout << vec.front() << endl;
       cout << vec.back() << endl;
       int lastPosition = vec.size() - 1;
       cout << vec[lastPosition] << endl;
       */


    /**
     * vector删除指定下标元素,erase() -> nb
      */
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(7);

    cout << vec.size() << endl;

    int minPosition;
    minPosition = min_element(vec.begin(), vec.end()) - vec.begin();
    cout << minPosition << endl;

    vec.erase(vec.begin() + minPosition);
    minPosition = min_element(vec.begin(), vec.end()) - vec.begin();
    cout << minPosition;

    system("pause");
    return 0;
}