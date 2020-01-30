//one of the bestest problem i have solved lets do it man
#include<iostream>
using namespace std;
void gccd(int a,int b,int c){
      if(a==1 || b==1){       cout<<a<<" "<<b<<" "<<c<<endl; return ;}
      cout<<a<<" "<<b<<" "<<c<<endl;      
      gccd(b%a,a,b/a);
}

int main()
{
	while(1)
	{   
		cout<<"try next "<<endl<<endl;
		int n;
		cin>>n;
		cout<<endl<<endl;
		int a=1000003;
		gccd(n,a,1);



	}
}


/*
like ababa; now find its rank
so
_ _ _ _ a
_ _ _ b/a a/b

