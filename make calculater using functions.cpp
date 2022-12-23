#include<iostream>
#include<cmath>
using namespace std;
int sum(int var1,int var2)//use functions
{
	return var1+var2;
}
int sub(int var1,int var2)
{
	return var1-var2;
}
int mul(int var1,int var2)
{
	return var1*var2;
}
int div(int var1,int var2)
{
	return var1/var2;
}
int mod(int var1,int var2)
{
	return var1%var2;
}
int main()
{
	int var1,var2,res1,res2,res3,res4,res5,res6,res7;
	cin>>var1>>var2;
	res1=sum(var1,var2);
	cout<<"sum="<<res1<<endl;
	res2=sub(var1,var2);
	cout<<"subtraction="<<res2<<endl;
	res3=mul(var1,var2);
	cout<<"multiplication="<<res3<<endl;
	res4=div(var1,var2);
	cout<<"division="<<res4<<endl;
	res5=mod(var1,var2);
	cout<<"remainder="<<res5<<endl;
	res6=sqrt(var1); 
	cout<<"square root="<<res6<<endl;
	res7=log(var2);
	cout<<"logarthim="<<res7<<endl;
	return 0;
}
