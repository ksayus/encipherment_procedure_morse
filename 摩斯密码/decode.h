#ifndef DECODE
#define DECODE

#include "morsepassword.h"

extern void decode_word()
{
	const int max_encipherment = 256;
	const int mix_encipherment = 128;
	int decode_inspection_number = 0;
	int decode_count = 0;
	int decode_program_long = 0;
	int decode_array[max_encipherment] = {};


	char input_encipherment_word[max_encipherment] = {};
	const char* output_encipherment_word[max_encipherment] = {};
	const char* output_decode_word[max_encipherment] = {};


	//输入文本
	cout << "输入你要解密的内容(直接复制):" << endl;
	cin >> input_encipherment_word;


	//将输入的数组char类型转换为char*
	char* input_encipherment_word_exchange_type[max_encipherment] = {};
	input_encipherment_word_exchange_type[mix_encipherment] = input_encipherment_word;
	cout << input_encipherment_word_exchange_type[mix_encipherment] << endl;


	//对输入的文本进行读取，以判断明文长度并将文本内容分开
	cout << "每段长度:" << endl;
	do {
		//等于 "," 时，保存decode_program_long的内容
		if (input_encipherment_word[decode_count] == ',')
		{
			decode_array[decode_inspection_number] = decode_program_long;
			cout << decode_array[decode_inspection_number] << endl;
			decode_program_long = 0;
			decode_inspection_number++;
		}
		//当不等于 "," 时，decode_program_long加一位数
		if (input_encipherment_word[decode_count] != ',')
		{
			decode_program_long++;
		}
		decode_count++;
	} while (input_encipherment_word[decode_count] != 0);
	//调试代码
	cout << "明文长度:" << endl;
	cout << decode_inspection_number << endl;


	int output_inspection_number = 0;

	ofstream decodeFile;
	decodeFile.open("decode_contect.txt", ofstream::app);
	fstream file("decode_contect.txt", ios::out);

	int decode_long_used = 0;
	char* encipherment_to_decode[mix_encipherment] = {};
	const char* encipherment_to_decode_exchange_type[mix_encipherment] = {};
	char* save_big_word[max_encipherment] = {};
	
	//输出
	cout << "解密完成！" << endl << "结果:" << endl;
	for (int i = 0; i < decode_inspection_number; i++)
	{
		char output_encipherment_word_char[max_encipherment] = {};
		for (int j = 0; j < decode_array[i]; j++)
		{
			output_encipherment_word_char[j] = input_encipherment_word[decode_long_used + j];
			//cout << encipherment_to_decode[j];
			//char output_encipherment_word_char[max_encipherment] = encipherment_to_decode[j];
		}
		//cout << output_encipherment_word_char << endl;
		//output_encipherment_word[max_encipherment] = encipherment_to_decode[mix_encipherment];
		
		for (int a = 0; a <= 26; a++)
		{
			string output_encipherment_word_char_star = {};
			output_encipherment_word_char_star = output_encipherment_word_char;
			if (output_encipherment_word_char_star == password_word[0][a])
			{
				cout << small_word[a];
				decodeFile << small_word[a];
			}
			if (a < 10)
			{
				if (output_encipherment_word_char_star == password_number[0][a])
				{
					cout << number_array[a];
					decodeFile << number_array[a];
				}
			}
		}
		//cout << endl;
		decode_long_used += decode_array[i] + 1;
		Sleep(300);
	}

	/*for (int txt_cout = 0; txt_cout < decode_inspection_number; txt_cout++)
	{
		
		output_inspection_number++;
	}*/
	cout << endl << "文本输出完成!" << endl;
	decodeFile.close();
	cout << "文本文档已关闭!" << endl;
}


#include "decode.cpp"
#endif // !DECODE

