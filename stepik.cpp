#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include<string>

using namespace std;

int main()
{
	string ch = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	string chk[16] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
	string x;
	cin >> x;
	for (int i = 0; i < x.size();i++) {
		int h=ch.find(x[i]);
		cout << chk[h];
		}
	

	
	return 0;

}
 //cout << (ey ? "YES" : "NO");
//stoi(s)
/*double sum = 0;
	double k = 0;
	for (int i = a.size()-1; i >=0;i--) {
		sum += (a[i] - '0') * pow(2,k);
			k++;
	}

	cout << sum<< " "<<sum/10<<" ";
	/*
	
	string itog=" ";
	int i = 0;
		itog+=ch[sum%32];
		sum = sum / 32;
	}
	for (int i = itog.size() - 1; i >= 0; i--) {
		cout << itog[i];
	}*/