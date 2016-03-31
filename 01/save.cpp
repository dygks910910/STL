
#include<iostream>
#include<chrono>//나노초 단위로 계산을함.
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
//하드에 기록한다.
void save()
{
	//현재타임포인트를 얻어온다.chrono::system_clock::time_point
	auto tp =
		chrono::system_clock::now();
	//타임포인트를 time_t로 변환한다.
	time_t time = chrono::system_clock::to_time_t(tp);
	//time_t를 ASCII문자열로 변한한다.
	string date = ctime(&time);
	//날짜를 얻어온다.

	//출력할 파일을 연다.
	ofstream out("2016 1 STL Mon56 Fri45.txt", ios::app);
	//읽어들일 파일을 연다.(소스.cpp)을연다.
	ifstream in("소스.cpp");
	//출력파일에 현재시간을 쓴다.
	out << "=========================================================================================================" << endl;
	out << date << endl;
	out << "=========================================================================================================" << endl;
	//입력파일을 읽어 모두 출력파일에 쓴다.
	char c;
	while (in.get(c))
		out.put(c);
}
