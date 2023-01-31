// дана строка с пробелами, найти кол-во слов, которые начинаются и заканчиваются одной и той же буквой

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, word;
	int s = 0;
	string::size_type k = 0, pos = 0;
	cout << "etner string" << endl;
	getline(cin, str);
	str = str + ' ';
	k = str.find(" ", pos);
	while (k != string::npos) {
		word = str.substr(pos, k - pos);
		if (word[0] == word[word.length() - 1])
			s++;
		pos = k + 1;
		k = str.find(" ", pos);
	}
	cout << "k = " << s << endl;
	return 0;
}

