#include <string>
#include <map>
#include <vector>
using namespace std;

class CClassContent
{
public:
	string defbody;
	/*  ��.h��Ѱ�ҳ�Ա��������ע�͵�
		map<string,string> valueTotype; //�����Ա����������
	*/
	string fatherclass;  //�Կո�ָÿ���ո����һ������
	CClassContent();
};

class CReadH
{
public:
	string Hname;
	string globalStr;
	vector<string> headfile;
	int classposition;
	//map <string,string> classdef;
	map <string,CClassContent*> classdef;
	CReadH(string name);
	int getclass(string allContent);
	string readallfile(string name);
	string getclassname(int pos,string content);
	string getclassbody(int pos,string content);
	string getfatherclassname(int pos,string content);
	string findGlobal(string content);
	void getheadfile(int classstart,string content);
	map<string,string> findValue(string content);
};