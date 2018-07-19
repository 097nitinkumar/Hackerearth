#include <iostream>
using namespace std;

int main() {
	char s[100]={'0'};
    int arr2[10]={0};
	scanf("%s",s);
	for(int i=0;s[i];i++)
	{
	    arr2[s[i]-'0']++;
	}
	for(int i=0;i<10;i++)
	{
	    printf("%d %d\n",i,arr2[i]);
	}

}
