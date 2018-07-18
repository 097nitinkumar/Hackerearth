
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main() {
	int size,find;
	cin >> size;
	vector <string> s;
	string p;
	for(int i=0;i<size;i++)
	{
	    cin>>p;
	    s.push_back(p);
	}
	
	for(int i=0;i<size;i++)
	{
	    find=0;
	    for(int j=0;j<s[i].size();j++)
	    {
	        char c=toupper(s[i][j]);
	        if((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
	        find++;
	    } 
	    cout<<find<<endl;
	}
	
	
}


