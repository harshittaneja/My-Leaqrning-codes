#include <iostream>
#include<string.h>
#define d 256 
using namespace std;
// main -txt match-pat

//h -hash  p-hashpat  t-hashtext
void search(char match[], char main[], int q) {
	int M = strlen(match);// length of second string 
	cout<<"match length:"<<M;
	int N = strlen(main);// length of main string
	cout<<"\n main length:"<<N<<endl;
	int hash  = 1; 
	int hashpat = 0; // hash value for pattern  (second string) 
	int hashtext = 0; // hash value for txt  (main string)  
	int i=0;
	int j=0;
	int counter=0;
	// h=d^(m-1) h= d to the power of m-1
	for (i = 0; i < M - 1; i++) {
	// calclating hash value
	
	//d is macro defined above
		hash  = (hash * d) % q;
		//here q to decrease hashvalue  
}
for (i = 0; i < M; i++) 
	{ 
	 // hash value for both text 
		hashpat = (d * hashpat + match[i]) % q;
		//p=(256* 0 + ascci value of h()))%101 
		hashtext = (d *hashtext + main[i]) % q; 
	}
	
	//now we going to compare hash values again and again 
	for (i = 0; i <= N - M; i++) 
	{ 
		// check for characters one by one 
		if (hashpat == hashtext ) 
		{ 
			/* Check for characters one by one */
			for (j = 0; j < M; j++) 
			{ 
				if (main[i+j] != match[j]) 
					break; 
			} 

		 
			if (j == M) {
			
			counter =counter+1;
				cout<<"Pattern found at index "<< i<<endl; 
		}
	}

		//again calculating hash value for  sliding after no match from previuos 
		
		if ( i < N-M ) 
		{ 
			hashtext = (d*(hashtext- main[i]*hash) + main[i+M])%q; 

			// We might get negative value of t, converting it 
			// to positive 
			if (hashtext < 0) 
		hashtext = (hashtext + q); 
		} 
	} 
	
	 cout<<match<<"occurences :"<<counter;
}




// main code 
int main() 
{ 
	char main[1000]; 
	char match[1000];
	cout<<"enter the main  string :";
	gets(main);
	cout<<"enter the second   string :";
	gets(match);
	 
	int l= 101; // A prime number to decrese the value of hashvalue in hash function  
	// two check them are they equal or not
	search(match, main, l); 
	return 0; 
} 

