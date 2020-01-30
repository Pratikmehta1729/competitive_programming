#include<bits/stdc++.h> 
using namespace std; 
int main()
{  //65 97
	int t;
	cin>>t;
	while(t--)
	{
		string  s;
		cin>>s;
		int arr1[26]={0},arr2[26]={0};
		for(int i=0; i<s.length(); i++)
		{   
			if(int(s[i])>91){arr1[s[i]-'a']++;}
	        else{arr2[s[i]-'A']++;}
			
		}
		for(int i=0; i<s.length(); i++)
		{   if(int(s[i])>91)
			{   if(((arr1[s[i]-'a'])+int(s[i]))>122)
			    {cout<<char(((arr1[s[i]-'a'])+int(s[i]))%123+97);}
			    else{cout<<char(((arr1[s[i]-'a'])+int(s[i])));}
				
			//cout<<(arr[s[i]-'a'])+(s[i]-'a')
			}
			else{
				if(((arr2[s[i]-'A'])+int(s[i]))>90)
				{
                   cout<<char(((arr2[s[i]-'A'])+int(s[i]))%91+65);
				}
				else
				{
                   cout<<char(((arr2[s[i]-'A'])+int(s[i])));
				}
			}
		}
	}

}

