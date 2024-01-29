#include<iostream>
using namespace std;
class abc{
	public:
	int arr1[2][2],i,j,k;
	get(){
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
		cout<<" enter thea"<<i<<j<<" matrix:";
		cin>>arr1[i][j];
		cout<<endl;
	}
	}
}
 abc operator+(abc temp){
 	abc temp1;
 	for(i=0;i<2;i++){
 		for(j=0;j<2;j++){
 	temp1.arr1[i][j]=arr1[i][j]+temp.arr1[i][j];
 	
}
}return temp1;
}
abc operator*(abc temp3){
	abc temp2;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			temp2.arr1[i][j]=0;
			for(k=0;k<2;k++){
			temp2.arr1[i][j]=temp2.arr1[i][j]+arr1[i][k]*temp3.arr1[k][j];
		}
	}
	
}
return temp2;
}
display(){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<arr1[i][j]<<endl;
			
		}
	}

}
	
	
};
main(){
	abc obj1,obj2,obj3,obj4;
	obj1.get();
	obj2.get();
	obj3=obj1+obj2;
	obj3.display();
	obj4=obj1*obj2;
	obj4.display();
}

