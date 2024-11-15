#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	//concatenation
	string result = str1 + " " + str2;
	cout << "concatenation:" << result << std::endl;
	
	//lenght
	size_t lenght =result.length();
	cout<<"lenght:"<<lenght<<std::endl;
	
	//substring
	string sub = result.substr();
	cout<<"substring:"<<sub<<std::endl;
	
	//find
	size_t pos = result.find("PENUSA");
	cout<<"posiition of 'PENUSA':" << pos << std::endl;
	
	//replace
	result.replace(0, 5, "Hi");
	cout<<"replaced: "<< result << std::endl;
	
	return 0;
}
