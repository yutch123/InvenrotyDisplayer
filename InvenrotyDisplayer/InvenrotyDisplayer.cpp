// InvenrotyDisplayer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Демонстрирует работу с константами

#include <string>
#include <vector>
#include <iostream>
using namespace std;

void display(const vector <string>& inventory);

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	display(inventory);
	return 0;
}
// параметр vec - константная ссылка на вектор строк
void display(const vector<string>& vec) // отображает содержимое снаряжение героя
{
	cout << "Your items: \n";
	for (vector<string>::const_iterator iter = vec.begin();
		iter != vec.end(); ++iter)
	{
		cout << *iter << endl;
	}
}