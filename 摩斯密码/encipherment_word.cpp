//#define WIN32_LEAN_AND_MEAN
//#include "encipherment_word.h"
//#include "morsepassword.h"
//#include <iostream>
//#include <Windows.h>
//#include "encipherment_word.h"
//using namespace std;
//
//void encipherment_word(char input_word[max_number])
//{
//	int while_number = 0;
//	int word_long_number = 0;
//
//	//char input_word[max_number] = {};
//	const char* output_word[max_number] = {};
//	char* output_word_return = new char[max_number];
//	char output_word_return_origin[max_number]{};
//	char change_input_word_type[max_number] = {};
//
//
//	//读取字符串长度
//	cin >> input_word;
//	while (input_word[while_number] != 0)
//	{
//		while_number++;
//	}
//
//	cout << while_number << endl;
//
//
//	int input_inspection_number = 0;
//
//	for (int i = 0; i < while_number; i++)
//	{
//		for (int y = 0; y <= 26; y++)
//		{
//			if (input_word[i] == big_word[y])
//			{
//				output_word[input_inspection_number] = password_word[y];
//			}
//			if (input_word[i] == small_word[y])
//			{
//				output_word[input_inspection_number] = password_word[y];
//			}
//			if (input_word[i] == number_array[y])
//			{
//				output_word[input_inspection_number] = password_number[y];
//			}
//		}
//
//		//输出加密内容
//		cout << output_word[input_inspection_number] << "," << endl;
//		Sleep(200);
//	}
//}
