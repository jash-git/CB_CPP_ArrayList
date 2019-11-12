#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

//http://www.cplusplus.com/forum/general/197176/
/*
https://mropengate.blogspot.com/2015/07/cc-vector-stl.html

Vector ���S��

���䴩�H���s��
�����X���ݼW�R�����ܧ� : O(1)
�����X�����W�R��������O�� : O(n)
���H�ҪO(�x��)�覡��{�A�i�H�x�s���N�������ܼơA�]�A�ϥΪ̦۩w�q����ƫ��A�C
�����@�Ǯe������ stable iterator �O�ҡA�ܤ����� vector ���O�ҡC�]���s�b�@�ǥi��y�� vector iterator ���Ī��ާ@�C

1. �s���������Ϊk
vec[i] - �s�����ޭȬ� i �������ȡC
vec.at(i) - �s�����ޭȬ� i ���������ȡA
vec.front() - �^�� vector �Ĥ@�Ӥ������ȡC
vec.back() - �^�� vector �̧��������ȡC

2. �s�W�β����������Ϊk
vec.push_back() - �s�W������ vector �����ݡA���n�ɷ|�i��O����t�m�C
vec.pop_back() - �R�� vector �̧��ݪ������C
vec.insert() - ���J�@�өΦh�Ӥ����� vector �������N��m�C
vec.erase() - �R�� vector ���@�өΦh�Ӥ����C
vec.clear() - �M�ũҦ������C

3. ���o����/�e�q���Ϊk
vec.empty() - �p�G vector �������šA�h�Ǧ^ true �ȡC
vec.size() - ���o vector �ثe�����������ӼơC
vec.resize() - ���� vector �ثe�����������ӼơC
vec.capacity() - ���o vector �ثe�i�e�Ǫ��̤j�����ӼơC�o�Ӥ�k�P�O���骺�t�m�����A���q�`�u�|�W�[�A���|�]�������Q�R����H����֡C
���s�t�m�����]����
vec.reserve() - �p�����n�A�i���� vector ���e�q�j�p�]�t�m��h���O����^�C�b���h�� STL �갵�A�e�q�u��W�[�A���i�H��֡C

4. �|�N (Iterator)

vec.begin() - �^�Ǥ@�� iterator�A�����V vector �Ĥ@�Ӥ����C
vec.end() - �^�Ǥ@�� iterator�A�����V vector �̧��ݤ������U�@�Ӧ�m�]�Ъ`�N�G�����O�̥������^�C
vec.rbegin() - �^�Ǥ@�ӤϦV iterator�A�����V vector �̧��ݤ������C
vec.rend() - �^�Ǥ@�� iterator�A�����V vector ���Ĥ@�Ӥ����C
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
