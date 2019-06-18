// Reverse_String.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>  //包括min和max函数

using namespace std;

/*
344题目：翻转一个字符串
	给定一个字符串，返回这个字符串的倒序字符串。
	如：“hello”，返回“olleh”

	Example 1:
	Input: ["h","e","l","l","o"]
	Output: ["o","l","l","e","h"]

	Example 2:
	Input: ["H","a","n","n","a","h"]
	Output: ["h","a","n","n","a","H"]
*/
class Solution {
public:
	void reverseString(vector<char>& s) {
		if (s.size()<=1)
		{
			return;
		}
		int l = 0;
		int r = s.size()-1;

		while (l<r)
		{
			swap(s[l++], s[r--]);
		}
	}
};

int main()
{
	char str[] = "hello";

	for (int i=0; i<(strlen(str));i++)
	{
		cout << str[i];
	}
	cout << endl;

	vector<char> vec(str, str+strlen(str));

	Solution().reverseString(vec);

	for (int i=0; i < vec.size();i++)
	{
		cout << vec[i];
	}
	
	cout << endl;

    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
