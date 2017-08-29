#include<iostream>
using namespace std;
class s2;
class s3;

class s1
{
   int marks[5];
   
   public:
   void getdata();
   friend void cal(s1,s2,s3);
   
};

void s1::getdata()
{
    int i;
    float sum=0;
    float per;
    cout<<"enter the marks= ";
    for(int i=0;i<5;i++)
    cin>>marks[i];
    sum=sum+marks[i];
    per=(sum/500)*100;
}

class s2
{
   int marks[5];
   
   public:
   void getdata();
   friend void cal(s1,s2,s3);
   
};

void s2::getdata()
{
    
    int i;
    float sum=0;
    float per;
    cout<<"enter the marks= ";
    for(int i=0;i<5;i++)
    cin>>marks[i];
    sum=sum+marks[i];
    per=(sum/500)*100;
}

class s3
{
   int marks[5];
   
   public:
   void getdata();
   friend void cal(s1,s2,s3);
   
};

void s3::getdata()
{
    int i;
    float sum=0;
    float per;
    cout<<"enter the marks= ";
    for(int i=0;i<5;i++)
    cin>>marks[i];
    sum=sum+marks[i];
    per=(sum/500)*100;
  
    
}

void cal(s1,s2,s3)
{
 if (s1.per>s.2per)
 cout<<s1.per;
 else if(s2.per>s3.per)
 cout<<s2.per;
 else
 cout<<s3.per;
  

}  




main()
{
  void cal(s1,s2,s3);
  return 0;
  
}
