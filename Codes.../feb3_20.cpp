#include <bits/stdc++.h>
using namespace std;
int final = 0;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      int arr[4][4] = { 0 };
      char M;
      int T;
      for (int i = 0; i < n; i++)
	  {
	  cin >> M >> T;
	  arr[int (M) - 65][(T / 3) - 1]++;
	  }
// 	for(int i=0; i<4; i++)
// 	{
// 	    for(int j=0; j<4; j++)
// 	    {
// 	        cout<<arr[i][j]<<" ";
// 	    }
// 	    cout<<endl;
// 	}
	
	
	
      int temp ,flag=0,ans;
      for (int i = 0; i <4; i++)
	{
	  for (int j = 0; j <4; j++)
	    {  
	      if (j != i)
		  {  
             
		    for (int k = 0; k <4; k++)
		    {
		      if (k != j && k != i)
			  {
			    for (int l = 0; l <4; l++)
			    {
			      if (l != i && l != j && l != k)
				  {  
                  //  cout<<"i:"<<i<<" j:"<<j<<" k:"<<k<<" l:"<<l<<endl;
				    
				    int atemp[4];
				    atemp[0] = arr[i][0];
				    atemp[1] = arr[j][1];
				    atemp[2] = arr[k][2];
				    atemp[3] = arr[l][3];
				    

				    
				    sort (atemp, atemp + 4);
				    ans = 0;
				//     cout << atemp[0] << " " << atemp[1] <<
				// 	" " << atemp[2] << " " << atemp[3] ;
				    for (int ii = 0; ii < 4; ii++)
				    {
				      ans += atemp[ii] *  (25 * (ii+1));
				      if (atemp[ii] == 0)
					  {
					  ans -= 100;
					  }

				    }
				    if(flag==0){temp=ans; flag=1;}
				   // cout<<" "<<ans<<endl;
				    if (ans > temp)
				    {
				      temp = ans;
				    }

				  }
			    }
			  }
		    }
		 }
	   }
	}
      final += temp;
      cout << temp << endl;

 }
  cout << final << endl;
}
