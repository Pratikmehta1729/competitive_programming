int m = operations.size();
for(int i=0; i<m; i++)
{
     
     reverse(arr.begin()+operations[i][0], arr.begin()+operations[i][1]+1); 
}
return arr;