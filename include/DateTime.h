#pragma once
//�������� ������ DateTime
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#ifndef _DATETIME_H_
#define _DATETIME_H_

typedef unsigned int T;

class DateTime {
private:
	time_t now;
public:
	DateTime(T, T, T);
	DateTime();
	DateTime(const DateTime &);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(T);
	string getPast(T);
	T getDifference(DateTime &);
};

#endif

/*� �������� ������ ����� ������� � ��������� ��� ������ � �������� �� ����������� ����������(struct tm, time, localtime, mktime)

�������� � ����� DateTime ��������� ������ :

����������� � ����� ��������� �����������(����, �����, ���);
����������� ��� ����������(������ ���������� ������� ����);
����������� �����������(������ ����� ������� �������);
getToday() - ����������� ������� ���� � ���� ������, � ��������� ��� ������ � 
			�������� ������(�������� 07 november 2018, wedensday);
getYesterday() - ����������� ���� ���������� ��� � ���� ������.
getTomorrow() - ����������� ���� ����������� ��� � ���� ������.
getFuture(unsigned int N) - ����������� ���� ����� N ���� � �������;
getPast(unsigned int N) - ����������� ���� ����� N ���� � �������;
getDifference(DateTime&) - ��� ������� �������(� ����) ����� ����� ������
��� ������ �� �������� ������������ ��� std::string*/