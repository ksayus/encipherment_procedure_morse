//#include "decode.h"
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//static void decode_word()
//{
//
//	const int max_encipherment = 512;
//	const int mix_encipherment = 128;
//	int decode_inspection_number = 0;
//	int decode_count = 0;
//	int decode_program_long = 0;
//	int decode_array[max_encipherment] = {};
//
//
//	char input_encipherment_word[max_encipherment] = {};
//	const char* output_encipherment_word[max_encipherment] = {};
//	const char* output_decode_word[max_encipherment] = {};
//
//
//	//输入文本
//	cin >> input_encipherment_word;
//
//
//	//将输入的数组char类型转换为char*
//	char* input_encipherment_word_exchange_type[max_encipherment] = {};
//	input_encipherment_word_exchange_type[mix_encipherment] = input_encipherment_word;
//
//
//	//对输入的文本进行读取，以判断明文长度并将文本内容分开
//	do {
//		//等于 "," 时，保存decode_program_long的内容
//		if (input_encipherment_word[decode_count] == ',')
//		{
//			decode_array[decode_inspection_number] = decode_program_long;
//			cout << decode_array[decode_inspection_number] << endl;
//			decode_program_long = 0;
//			decode_inspection_number++;
//		}
//		//当不等于 "," 时，decode_program_long加一位数
//		if (input_encipherment_word[decode_count] != ',')
//		{
//			decode_program_long++;
//		}
//		decode_count++;
//	} while (input_encipherment_word[decode_count] != 0);
//	//调试代码
//	cout << decode_inspection_number << endl;
//
//
//	int decode_long_used = 0;
//	char* encipherment_to_decode[max_encipherment] = {};
//
//	for (int i = 0; i < decode_inspection_number; i++)
//	{
//		for (int j = 0; j < decode_array[i]; j++)
//		{
//			encipherment_to_decode[j] = input_encipherment_word_exchange_type[decode_long_used + j];
//			cout << encipherment_to_decode[j];
//		}
//		cout << endl;
//		decode_long_used += decode_array[i] + 1;
//		Sleep(300);
//	 }
//}
