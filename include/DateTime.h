#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <ctime> 
#include <string>
#include <math.h>
class DateTime
{
private:
	time_t now;

public:
	DateTime(int,int,int);
	DateTime();//����������� ��-���������
	DateTime(const DateTime&);//����������� �����������
	std::string getToday(); //- ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	std::string getYesterday(); //- ����������� ���� ���������� ��� � ���� ������.
	std::string getTomorrow(); //- ����������� ���� ����������� ��� � ���� ������.
	std::string getFuture(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	std::string getPast(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	int calcDifference(DateTime&);
};