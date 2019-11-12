#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

//http://www.cplusplus.com/forum/general/197176/
/*
https://mropengate.blogspot.com/2015/07/cc-vector-stl.html

Vector 的特色

●支援隨機存取
●集合尾端增刪元素很快 : O(1)
●集合中間增刪元素比較費時 : O(n)
●以模板(泛型)方式實現，可以儲存任意類型的變數，包括使用者自定義的資料型態。
●有一些容器提供 stable iterator 保證，很不幸的 vector 不保證。因此存在一些可能造成 vector iterator 失效的操作。

1. 存取元素的用法
vec[i] - 存取索引值為 i 的元素值。
vec.at(i) - 存取索引值為 i 的元素的值，
vec.front() - 回傳 vector 第一個元素的值。
vec.back() - 回傳 vector 最尾元素的值。

2. 新增或移除元素的用法
vec.push_back() - 新增元素至 vector 的尾端，必要時會進行記憶體配置。
vec.pop_back() - 刪除 vector 最尾端的元素。
vec.insert() - 插入一個或多個元素至 vector 內的任意位置。
vec.erase() - 刪除 vector 中一個或多個元素。
vec.clear() - 清空所有元素。

3. 取得長度/容量的用法
vec.empty() - 如果 vector 內部為空，則傳回 true 值。
vec.size() - 取得 vector 目前持有的元素個數。
vec.resize() - 改變 vector 目前持有的元素個數。
vec.capacity() - 取得 vector 目前可容納的最大元素個數。這個方法與記憶體的配置有關，它通常只會增加，不會因為元素被刪減而隨之減少。
重新配置／重設長度
vec.reserve() - 如有必要，可改變 vector 的容量大小（配置更多的記憶體）。在眾多的 STL 實做，容量只能增加，不可以減少。

4. 疊代 (Iterator)

vec.begin() - 回傳一個 iterator，它指向 vector 第一個元素。
vec.end() - 回傳一個 iterator，它指向 vector 最尾端元素的下一個位置（請注意：它不是最末元素）。
vec.rbegin() - 回傳一個反向 iterator，它指向 vector 最尾端元素的。
vec.rend() - 回傳一個 iterator，它指向 vector 的第一個元素。
*/

void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}
int main() {
    std::vector<double> arr;
    arr.push_back(2.02);
    arr.push_back(1.02);
    arr.push_back(3.03);
    std::sort(arr.begin(), arr.end());
    for (int i=0;i<arr.size();i++)
    {
        double buf=arr[i];
        std::cout << buf << "\n";
    }
    Pause();
    return 0;
}
