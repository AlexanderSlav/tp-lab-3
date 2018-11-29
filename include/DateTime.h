#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
class DateTime {
private:
	time_t current_time;
	string string_time;
public:
	DateTime();  //����������� ��� ����������
	DateTime(unsigned int, unsigned int, unsigned int); //����������� � 3 ��������� �����������
	DateTime(const DateTime&);  //�����������
	string getToday();   //����������� ������� ����
	string getYesterday();  //����������� ���� ���������� ��� 
	string getTomorrow();   //����������� ���� ����������� ��� 
	string getFuture(unsigned int);  // ����������� ���� ����� N ���� � �������
	string getPast(unsigned int);    // ����������� ���� ����� N ���� � �������;
	unsigned int getDifference(DateTime&);   // ��� ������� ������� (� ����) ����� ����� ������

};
