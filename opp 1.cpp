#include<iostream>
using namespace std;
class Temp{
public:
	float temperature;
	public:
		void info()
		{
			cout<<"Enter temperature of 5 days: ";
			cin>>temperature;
			
		}};
		int main()
		{
			Temp t1, t2, t3, t4, t5;
			t1.info();
			t2.info();
			t3.info();
			t4.info();
			t5.info();
			if(t1.temperature>t2.temperature && t1.temperature>t3.temperature && t1.temperature>t4.temperature && t1.temperature>t5.temperature){			
			cout<<"t1 is hottest day";}
			else if(t2.temperature>t1.temperature && t2.temperature>t3.temperature && t2.temperature>t4.temperature && t2.temperature>t5.temperature){
			cout<<"t2 is hottest day";}
			else if(t3.temperature>t1.temperature && t3.temperature>t2.temperature && t3.temperature>t4.temperature && t3.temperature>t5.temperature){
			cout<<"t3 is hottest day";}
			else if(t4.temperature>t1.temperature && t4.temperature>t2.temperature && t4.temperature>t3.temperature && t4.temperature>t5.temperature){
			cout<<"t4 is hottest day";}
			else {
			cout<<"t5 is hottest day";}
			return 0;
		}



