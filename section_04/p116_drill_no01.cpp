﻿/*whileループで構成されたプログラムを作成する．
ループを繰り返すたびにint型の値を２つ読み込み，出力する．
"|"が入力されたらプログラムを終了する．*/
#include "../../std_lib_facilities.h"

int main()
{
	int a, b;
	char c {};
	constexpr char end = '|';

	cout << "Please enter 2 integer values.if you want to quit,type | to exit.: ";
	while (cin >> c && c != end) {  //双方の条件がそろった場合ループを行う(trueの場合)
		cin.putback(c);  //cをストリームに戻し，次に読み込む文字にする(p1146を参照)
		if (cin >> a >> b) {
			cout << "Entered numbers is " << a << ' ' << b << '\n';
		}
		else {
			cin >> c;
			if (c == end) {
				break;
			}
			cout << "Please dont enter invalid value,try again: \n";
		}
		cout << "Please enter 2 integer value.if you want to quit,type | to exit.: ";
	}
	return 0;
}