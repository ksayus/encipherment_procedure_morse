#ifndef ENCIPHERMENT_WORD
#define ENCIPHERMENT_WORD

#define WIN32_LEAN_AND_MEAN
#include "morsepassword.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdlib.h> 
using namespace std;

const int max_number = 512;

const char* output_word[max_number] = {};
//string output_word_encipherment[max_number] = {};

extern void encipherment_word()
{
	
	int while_number = 0;
	int word_long_number = 0;
	char input_word[max_number] = {};

	//char input_word[max_number] = {};

	//读取字符串长度
	cout << "输入你要加密的内容(支持字母和数字):" << endl;
	cin >> input_word;
	while (input_word[while_number] != 0)
	{
		while_number++;
	}
	//调试
	cout << "输入文本长度:" << endl;
	cout << while_number << endl;

	int input_inspection_number = 0;

	//char* input_word_change[max_number]{};
	

	cout << "加密完成！" << endl << "结果:" << endl;
	for (int i = 0; i < while_number; i++)
	{
		//input_word_change[i] == input_word[i];
		for (int y = 0; y <= 26; y++)
		{
			if (input_word[i] == big_word[y])
			{
				output_word[input_inspection_number] = password_word[0][y];
			}
			if (input_word[i] == small_word[y])
			{
				output_word[input_inspection_number] = password_word[0][y];
			}
			if (input_word[i] == number_array[y])
			{
				output_word[input_inspection_number] = password_number[0][y];
			}
			/*if (input_word[i] != big_word[y] && input_word[i] != small_word[y] && input_word[i] != number_array[y])
			{
				output_word_encipherment[i] = input_word[i];
			}*/
		}

		

		//输出加密内容
		cout << output_word[input_inspection_number] << "," ;
		//cout << output_word_encipherment[input_inspection_number] << ",";
		input_inspection_number++;
		Sleep(200);
	}

	input_inspection_number = 0;

	ofstream enciphermentFile;
	enciphermentFile.open("encipherment_contect.txt", ofstream::app);
	fstream file("encipherment_contect.txt", ios::out);

	for (int txt_cout = 0; txt_cout < while_number; txt_cout++)
	{
		enciphermentFile << output_word[input_inspection_number] << ",";
		input_inspection_number++;
	}

	cout << endl << "文本输出完成!" << endl;
	enciphermentFile.close();
	cout << "文本文档已关闭!" << endl;
}

//void encipherment_contect_cout()
//{
//	ofstream enciphermentFile;
//	enciphermentFile.open("encipherment_contect.txt", ofstream::app);
//	fstream file("encipherment_contect.txt", ios::out);
//
//	enciphermentFile << output_word << endl;
//	cout << endl << "文本输出完成!" << endl;
//
//	enciphermentFile.close();
//	cout << "文本文档已关闭!" << endl;
//}

#endif // !1
