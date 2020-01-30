/* C program to find roots of a quadratic equation */
#include<stdio.h> 
#include<math.h> 
#include<stdlib.h> 


// Prints roots of quadratic equation ax*2 + bx + x 
int findRoots(int a, int b, int c) 
{ 
	// If a is 0, then equation is not quadratic, but 
	// linear 
	// if (a == 0) 
	// { 
	// 	printf("Invalid"); 
	// 	return; 
	// } 

	int d = b*b - 4*a*c; 
	double sqrt_val = sqrt(abs(d)); 

	if (d > 0) 
	{ 
		//printf("Roots are real and different \n"); 
		// printf("%f\n%f",(double)(-b + sqrt_val)/(2*a) 
		// 	, (double)(-b - sqrt_val)/(2*a));
			return int((double)(-b + sqrt_val)/(2*a)); 
	} 
	// else if (d == 0) 
	// { 
	// 	//printf("Roots are real and same \n"); 
	// 	printf("%f",-(double)b / (2*a)); 
	// } 
	// else // d < 0 
	// { 
	// 	//printf("Roots are complex \n"); 
	// 	printf("%f + i%f\n%f - i%f", -(double)b / (2*a),sqrt_val 
	// 		,-(double)b / (2*a), sqrt_val); 
	// } 
} 

// Driver code 
// int main() 
// { 
// 	int a = 1, b = -7, c = 12; 
// 	findRoots(a, b, c); 
// 	return 0; 
// } 


#include<bits/stdc++.h>
using namespace std;
int main()
{
   int q,g,a,b;cin>>q;
   for(int i=0; i<q; i++)
   {
    cin>>a;
    int g=findRoots(1, 1, -2*a);
    cout<<g<<"g"<<endl;
    b=a-((g*(g+1))/2);
    if(b==0){g-=1; b=a-((g*(g+1))/2);}
    cout<<b<<endl;
   }  
	//run on samll no.
  //findRoots(1, 1, -2*a);
	return 0;
} 


// int x1,x2,x3,x4,x5,x6;
//   int y1,y2,y3,y4,y5,y6;
//   cin>>x1>>y1>>x2>>y2;
//   cin>>x3>>y3>>x4>>y4;
//   cin>>x5>>y5>>x6>>y6;
//   int x=0,y=0,area=abs((x2-x1)*(y2-y1));
//    if(x3<=x1 && x4<=x2 && x4>=x1){x=x4-x1; }
//    if(x3>=x1 && x4<=x2 && x4>=x1){x=x4-x3; }
//    if(x3>=x1 && x3<=x2 && x4>=x2){x=x2-x3; }
//    if(x3<=x1 && x4>=x2 ){x=x2-x1;         }
//    if(y3<=y1 && y4<=y2 && y4>=y1){y=y4-y1; }
//    if(y3>=y1 && y4<=y2 && y4>=y1){y=y4-y3; }
//    if(y3>=y1 && y3<=y2 && y4>=y2){y=y2-y3; }
//    if(y3<=y1 && y4>=y2 ){y=y2-y1;         }
//    // cout<<" x"<<x<<" y"<<y<<endl;
//    area-=abs(x*y);
//    x=0;y=0;

//    if(x5<=x1 && x6<=x2 && x6>=x1){x=x6-x1;}
//    if(x5>=x1 && x6<=x2 && x6>=x1){x=x6-x5;}
//    if(x5>=x1 && x5<=x2 && x6>=x2){x=x2-x5;}
//    if(x5<=x1 && x6>=x2 ){x=x2-x1;         }
//    if(y5<=y1 && y6<=y2 && y6>=y1){y=y6-y1;}
//    if(y5>=y1 && y6<=y2 && y6>=y1){y=y6-y5;}
//    if(y5>=y1 && y5<=y2 && y6>=y2){y=y2-y5;}
//    if(y5<=y1 && y6>=y2 ){y=y2-y1;         }
//    // cout<<" x"<<x<<" y"<<y<<endl;
//    area-=abs(x*y);
//    if(area>0){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}



// int n;
//   cin>>n;
//   char str[n];
//   for(int i=0; i<n; i++)
//   {
//   	cin>>str[i];
//   }
  
//   int ans=0; 
//   for(int i=0; i<n; i=i+2)
//   {
//     if(str[i]='a' && str[i+1]='a'){ans++; str[i+1]='b';}
//     if(str[i]='b' && str[i+1]='b'){ans++; str[i+1]='a';}	
//   }
//   cout<<ans<<endl;
//   for(int i=0; i<n; i++)
//   	{
//   		cout<<str[i]<<" ";
//   	}


    // int n;
    // cin>>n;
    // int ans=0,a;
    // std::vector<pair<int,int> > v;
    // for(int i=0; i<n; i++)
    // {   cin>>a;
    // 	v.push_back( make_pair(a,i+1) ); 
    // }
    // sort(v.begin(), v.end());
    // for(int i=0; i<n; i++)
    // {
    //      ans+=(v[i].first)*i+1;
    //      cout<<ans<<" ";
    // }
    // cout<<ans<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<v[i].second<<" ";
    // }