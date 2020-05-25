#include<bits/stdc++.h>
#include<vector>
 using namespace std;


bool isPrime(int n) 
{ 
 
        if (n <= 1) 
        return false; 
        if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
    
     void printPrime(int n) 
   { 
      int A[n],mrk=0;
      for (int i = 2; i <= n; i++) 
        { 
           if (isPrime(i)) 
              {
                  A[mrk]=i;
                  mrk++;
              }
        }
        for(int i=0;i<mrk;i++)
        {
            for(int j=i;j<mrk;j++)
            {
                if(A[i]+A[j]==n)
                  cout<<n<<'='<<A[i]<<'+'<<A[j]<<'\n';
            }
        }
   } 


int main()
{
	
	int n;
	cin>>n;
	if(n%2==1)
	  {
	  	cout<<"Not possible"<<'\n';
	  	exit(0);
	  }
	else printPrime(n);		
}
