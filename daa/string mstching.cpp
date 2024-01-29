// C++ program for Naive Pattern 
// Searching algorithm 
#include <bits/stdc++.h> 
using namespace std; 
 
int search(char* pat, char* txt) 

{  int count=0,index[100];
	int M = strlen(pat); 
	int N = strlen(txt); 

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) { 
		int j; 

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++) 
			if (txt[i + j] != pat[j]) {
			
				break; 
}
		if (j == M) {// if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
		count=count+1;
			cout << "Pattern found at index "
				<< i << endl; 
				
	} 
}
return count;
}


// Driver Code 
int main() 
{ 
	char txt[100] ; 
	char pat[100];
	cout<<"Enter the main string:";
	gets(txt);
		cout<<"Enter the maching string:";
	gets(pat);
	
	int z=search(pat, txt); 
	cout<<pat<<"   ocurrence "<<z;
	return 0; 
} 



