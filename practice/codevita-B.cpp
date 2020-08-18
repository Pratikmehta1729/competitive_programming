


#include <bits/stdc++.h> 
using namespace std; 


void callfinal(int m, int n, vector< vector<int> > &a, vector<int> &final)
{

    int i, k = 0, l = 0; 
    
    

	int count=0;
	
	
    /* k - starting row index  
        m - ending row index  
        l - starting column index  
        n - ending column index  
        i - iterator  
    */
  
    while (k < m && l < n) { 
        /* Print the first row from 
               the remaining rows */



        for (i = l; i < n; ++i) {
            
            
            
            a[k][i]=final[count];
            count++;
            // cout<< a[k][i] << " ";
            // cout<<" detail "<<r<<" "<<c<<" "<< count<<endl; 
        } 
        k++; 
  
        /* Print the last column  
         from the remaining columns */
        for (i = k; i < m; ++i) { 
            
            
	           a[i][n-1]=final[count];
               count++;
            
            
            	// cout << a[i][n - 1] << " "; 
            	// cout<<" detail "<<r<<" "<<c<<" "<< count<<endl;
        } 
        n--; 
  
        /* Print the last row from  
                the remaining rows */
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                
	            
	           a[m-1][i]=final[count];
               count++;                
                
                
                // cout << a[m - 1][i] << " "; 
                // cout<<" detail "<<r<<" "<<c<<" "<< count<<endl;
            
            } 
            m--; 
        } 
  
        /* Print the first column from 
                   the remaining columns */
        if (l < n) { 
            for (i = m - 1; i >= k; --i) {
                
                
	           a[i][l]=final[count];
               count++;	            
                
                // cout << a[i][l] << " "; 
                // cout<<" detail "<<r<<" "<<c<<" "<< count<<endl;
            } 
            l++; 
        } 
    }
}

void spiralPrint(int m, int n, vector< vector<int> > &a, vector<int> &layers) 
{ 
    int r = m,c=n; 
    int i, k = 0, l = 0; 
    int num_layers = min(r,c)/2;
    
    
    vector<vector<int> > tot;
	vector<int> sample;
	int count=0;
	
	
    /* k - starting row index  
        m - ending row index  
        l - starting column index  
        n - ending column index  
        i - iterator  
    */
  
    while (k < m && l < n) { 
        /* Print the first row from 
               the remaining rows */



        for (i = l; i < n; ++i) {
            
            ++count;
            if(count>=((r-1)*2)+((c-1)*2))
            {   
                count=0;
                r-=2; c-=2;
                sample.push_back(a[k][i]);
                tot.push_back(sample);
                sample.clear();
            }
            else{
                 sample.push_back(a[k][i]);
            }
            
            
            
            // cout<< a[k][i] << " ";
            // cout<<" detail "<<r<<" "<<c<<" "<< count<<endl; 
        } 
        k++; 
  
        /* Print the last column  
         from the remaining columns */
        for (i = k; i < m; ++i) { 
            
            
	            ++count;
	            if(count>=((r-1)*2)+((c-1)*2))
	            {   
	                count=0;
	                r-=2; c-=2;
	                sample.push_back(a[i][n-i]);
	                tot.push_back(sample);
	                sample.clear();
	            }
	            else{
	                 sample.push_back(a[i][n-1]);
	            }
            
            
            	// cout << a[i][n - 1] << " "; 
            	// cout<<" detail "<<r<<" "<<c<<" "<< count<<endl;
        } 
        n--; 
  
        /* Print the last row from  
                the remaining rows */
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                
	            ++count;
	            if(count>=((r-1)*2)+((c-1)*2))
	            {   
	                count=0;
	                r-=2; c-=2;
	                sample.push_back(a[m-1][i]);
	                tot.push_back(sample);
	                sample.clear();
	            }
	            else{
	                sample.push_back(a[m-1][i]);
	            }
                
                
                
                // cout << a[m - 1][i] << " "; 
                // cout<<" detail "<<r<<" "<<c<<" "<< count<<endl;
            
            } 
            m--; 
        } 
  
        /* Print the first column from 
                   the remaining columns */
        if (l < n) { 
            for (i = m - 1; i >= k; --i) {
                
                
	            ++count;
	            if(count>=((r-1)*2)+((c-1)*2))
	            {   
	                count=0;
	                r-=2; c-=2;
	                sample.push_back(a[i][l]);
	                tot.push_back(sample);
	                sample.clear();
	            }
	            else{
	                sample.push_back(a[i][l]);
	            }
                
                // cout << a[i][l] << " "; 
                // cout<<" detail "<<r<<" "<<c<<" "<< count<<endl;
            } 
            l++; 
        } 
    }



    
    // cout<<endl<<endl;
    
    for(int ii=0; ii<int(layers.size()); ii++)
    {
    	layers[i]%=tot[ii].size();
    }

    vector<int> final;
    for(int ii=0; ii<int(layers.size()); ii++)
    {   
        if(ii%2!=0)
		{    rotate(tot[ii].begin(), tot[ii].begin()+(tot[ii].size()-layers[ii]), tot[ii].end()); 
		    final.insert(final.end(), tot[ii].begin(), tot[ii].end());
        }
        else{
           rotate(tot[ii].begin(), tot[ii].begin()+layers[ii], tot[ii].end()); 
		    final.insert(final.end(), tot[ii].begin(), tot[ii].end());	
        }
    }
     

    // for(int ii=0; ii<final.size(); ii++){cout<<final[ii]<<" ";}
    // 	cout<<endl;

    // for(int ii=0; ii<tot.size(); ii++)
    // {

    //     for(int jj=0; jj<tot[ii].size(); jj++)
    //     {
    //         cout<<tot[ii][jj]<<" ";
    //     }
    //     cout<<endl;
    // }

    callfinal( a.size(),  a[0].size(), a, final);
} 
  
/* Driver program to test above functions */
int main() 
{ 
    // vector< vector<int> > v { { 1, 2, 3, 4 },
    //                 		{ 5, 6, 7, 8 },
    //                 		{ 9, 10, 11, 12 },
    //                 		{ 13, 14, 15, 16 },
    //                 		{ 17, 18, 19, 20 }, 
    //                 		{ 21, 22, 23, 24 } }; 
  
    // vector<int> layers{1,2};
  
    std::vector<vector<int> > v;
    

    int r,c;
    cin>>r>>c;

    for(int i=0; i <r; i++)
    {   std::vector<int> v1(c);
    	for(int j=0; j<c; j++)
    	{
            cin>>v1[j];
    	}
    	v.push_back(v1);
    }
    int num_layers1 = min(r,c)/2;
    std::vector<int> layers(num_layers1);
    for(int i=0; i<num_layers1; i++)
    {
    	cin>>layers[i];
    }
    
    // for(int i=0; i <r; i++)
    // {   
    // 	for(int j=0; j<c; j++)
    // 	{
    //         cout<<v[i][j]<<" ";
    // 	}
    //      cout<<endl;
    // }
    

    spiralPrint(v.size(), v[0].size(), v,layers); 

    // cout<<endl;
    for(int i=0; i<int(v.size()); i++)
    {
    	for(int j=0; j<int(v[0].size()); j++)
    	{

            cout<<v[i][j]<<" ";
    	}
    	cout<<endl;
    }
    return 0; 
} 
