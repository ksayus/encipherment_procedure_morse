#include <iostream>
#include "encipherment_word.h"
#include <Windows.h>
#include "decode.h"

using namespace std;

int main() {
	
	
	//根据模式进行调用函数
	while (1)
	{
		//输入模式并检验
		int type_modoul = 0;
		system("cls");
		do {
			cout << "请输入数字选择模式:" << endl;
			cout << "1-加密模式" << "    " << "2-解密模式" << "    " << "3-退出" << endl;
			cin >> type_modoul;
		} while (type_modoul != 1 && type_modoul != 2 && type_modoul != 3);

		if (type_modoul == 1)
		{
			system("cls");
			cout << "进入加密模式" << endl;
			encipherment_word();
			//encipherment_contect_cout();
			cout << endl;
			system("pause");
		}
		else {
			if (type_modoul == 2)
			{
				system("cls");
				cout << "进入解密模式" << endl;
				decode_word();
				cout << endl;
				system("pause");
			}
			else {
				if (type_modoul == 3)
				{
					system("cls");
					cout << "退出程序！" << endl;
					break;
				}
			}
		}
	}
	
	system("pause");
	return 0;
}