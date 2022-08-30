#include<iostream>
using namespace std;
int main()
{
    string word1,word2;
    int count=0,wordLength;
    cin>>word1>>word2;
    wordLength=word1.length();
    for(int i=0; i<wordLength; i++)
    {
        if(word1[i]!=word2[wordLength-i-1])
        {
            count++;
            break;
        }
    }

    if(count==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
