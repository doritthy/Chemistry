#include <iostream>
#include <fstream>
#include <string>
#include <vector> 
using namespace std;
int main()
{
	int c;
	do
{
  string input;
  setlocale(LC_ALL, "Russian");
  cout<<"������� �������� �������� � ���� �������\n";
  cin>> input;
  fstream fin("test.txt");
    if (fin)
    {
        const int N = 100;
        string search = input;
        string str;
        vector <string> v;
        while (getline(fin, str))
        {
            size_t i = 0;
            while (true)
            {
                i = str.find(search, i);
                if (i != string::npos)
                {
                    i += search.size();
                    string temp;
                    temp.append(str, i, N);
                     v.push_back(temp);
                     i += N;
                }
                else
                    break;
            }
        }
        for (size_t i = 0; i < v.size(); ++i)
        	cout<<"��������-----�����------�����---��.����\n"<< v[i] << endl;

    }
    else
        cout << "Error!" << endl;
	cout << "1. ����������\n"<< "0. ���������\n";
    cin >> c;}
    while (c!=0);
    	return 0;
    }
