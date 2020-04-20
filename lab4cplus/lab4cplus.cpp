#include <iostream>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <ctype.h>
#include <clocale>



using namespace std;

void task1()
{
	cout << "\t\t\tTask 1" << endl << endl;
	string str1 = "U are so beftiful";
	cout << "Строка до преобразования: " << str1.c_str() <<  endl;
	str1.erase(str1.length() - 1, 1);
	cout << "Преобразованный вид: "<< str1.c_str();

	cout << endl << endl;

}
void task2()
{
	cout << "\t\t\tTask 2" << endl << endl;

	unsigned int  i = 0,k = 0, n = 0;
	string s = "Human is the most clever animal";
	cout << "До преобразования: " << s.c_str() << endl;
	
	

	n = s.length();
	i = s.find(' ');
	while ((s[i] != '\0') && (i >=0) )
	{
		if (s[i] == ' ')
		{
			s.resize(++n);
			for (k = n; k > i; k--)
			{
				s[k] = s[k - 1];
			}
			for (k = 0; k < 2; k++)
			{
				s[i + k] = ' ';
			}
			    i += 1;
		}
		i++;
	}

	cout << "После преобразования: " << s.c_str() << endl;

	cout << endl << endl;

	
}




void task3()//need fix
{

	string s1 = "Вы ввели текстовое составляющее";
	cout << s1.c_str();
	int count = 0;
	for (size_t i = 0; i < s1.length(); i++)
	{
		if (isalpha(s1[i]) && islower(s1[i]))
		{
			count++;
		}
	}
		cout << endl << count;
	


}



int main()
{

	setlocale(LC_ALL, "ru");
	task1();
	task2();
	//task3();
}

