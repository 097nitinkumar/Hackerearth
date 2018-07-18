#include <iostream>
using namespace std;
int main(){
    long cases,arr[100001]={0},arr2[100001]={0},times;
	scanf("%d", &cases);
    for(int i=0;i<cases;++i)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &times);
    for(int i=0;i<cases;++i)
    {
        arr2[arr[i]]++;
    }
    for(int i=0;i<cases;++i)
    {
        if(arr2[i]==times)
        {
            printf("%d",i);
            break;
        }
    }
}
