
#include<iostream>
#include<chrono>//������ ������ �������.
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
//�ϵ忡 ����Ѵ�.
void save()
{
	//����Ÿ������Ʈ�� ���´�.chrono::system_clock::time_point
	auto tp =
		chrono::system_clock::now();
	//Ÿ������Ʈ�� time_t�� ��ȯ�Ѵ�.
	time_t time = chrono::system_clock::to_time_t(tp);
	//time_t�� ASCII���ڿ��� �����Ѵ�.
	string date = ctime(&time);
	//��¥�� ���´�.

	//����� ������ ����.
	ofstream out("2016 1 STL Mon56 Fri45.txt", ios::app);
	//�о���� ������ ����.(�ҽ�.cpp)������.
	ifstream in("�ҽ�.cpp");
	//������Ͽ� ����ð��� ����.
	out << "=========================================================================================================" << endl;
	out << date << endl;
	out << "=========================================================================================================" << endl;
	//�Է������� �о� ��� ������Ͽ� ����.
	char c;
	while (in.get(c))
		out.put(c);
}
