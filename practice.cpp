/*#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class student{
     char name[50];
     int roll_number;
     public:
     void getdata(char name[50],int roll_number)
     {
        strcpy(this->name,name);
        this->roll_number=roll_number;
     }
     void display()
     {
        cout<<this->name<<endl;
        cout<<roll_number;
     }

};
int main()
{
    char name[50];
    int roll_number;
    //creating object of a class
    student obj1;
    cout<<"enter youe roll number";
    cin>>roll_number;
    cout<<"enter your name";
    fflush(stdin);
    gets(name);
    obj1.getdata(name,roll_number);
    obj1.display();
    return 0;

}*/
/*#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Students_D
{char phone[11],name[50];
int roll_num;
public:
void getdata(int roll_num,char phone[11],char name[50]){
   strcpy(this->name,name);
  strcpy(this->phone,phone);
  this->roll_num=roll_num;
}
void display()
{
   cout<<roll_num<<endl;
   cout<<name<<endl;
   cout<<phone<<endl;
}

};
int main()
{
   int roll_num;
   char phone[11],name[50];
   Students_D student1,student2;
   cout<<"enter the roll number of students";
   cin>>roll_num;
   cout<<"enetr your name";
   fflush(stdin);
   gets(name);
   cout<<"enter your mobile number";
   fflush(stdin);
   gets(phone);
   student1.getdata(roll_num,phone,name);
   student1.display();
    cout<<"enter the roll number of students";
   cin>>roll_num;
   cout<<"enetr your name";
   fflush(stdin);
   gets(name);
   cout<<"enter your mobile number";
   fflush(stdin);
   gets(phone);
   student2.getdata(roll_num,phone,name);
   student2.display();
   return  0;
}*/
/*#include<iostream>
using namespace std;
class triangle{
   public:
   int b,h;
   triangle(int b,int h)
   { this->b=b;
   this->h=h;
   }
   void display()
   {
      int area;
      area=(b*h)/2;
      cout<<area;
   }


};

int main()
{
   triangle t(3,5);
   t.display();
   return 0;
}*/

/*#include<iostream>
using namespace std;
class rectangle{
   int a,B;
   public:
   rectangle(int b,int h)
   { a=b;
   B=h;

   }
   void area()
   { int x;
    x=a*B;
    cout<<"the area is :"<<x;
   }

};
int main()
{
  
   rectangle r1(4,5),r2(5,8);
   r1.area();
   cout<<endl;
   r2.area();

   return 0;
}*/
/*#include<iostream>
using namespace std;
class area{
   int l,b;
   public:
   void setdim(int x,int y)
   {
      l=x;
      b=y;
   }
   void getarea(){
      int y;
      y=l*b;
      cout<<"the area is"<<y;
   }

};
int main()
{ system("cls");
   int a,b;
   area a1;
   cout<<"the len and bred of rectangle ";
   cin>>a>>b;
   a1.setdim(a,b);
   a1.getarea();
   return 0;
}*/
/*#include<iostream>
using namespace std;
class area
{ int a,b;
public:
area(int x,int y)
{
   a=x;
   b=y;
}
void returnarea()
{
   int z;
   z=a*b;
   cout<<"the area is :"<<z;
}
};

int main()
{ int a,b;
system("cls");
cout<<"enter the length and breadth of rectangle:";
cin>>a>>b;
   area mine(a,b);
   mine.returnarea();
}*/
/*#include<iostream>
using namespace std;
class avg{
  
   public:
     static void average(int x,int y,int z)
    {
     
      int m;
      m=(x+y+z)/3;
      cout<<"the avg is:"<<m;
    }

};
int main()
{system("cls");
    int a,b ,c;
    cout<<"enter value of a,b ,c";
   cin>>a>>b>>c;
   
   avg ::average(a,b,c);
   
   return 0;
   
}*/
/*#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class employees{
   int year,year1,year2,salary,salary1,salary2;
   char name[50] ,name1[50],name2[50],address[100],address1[100],address2[100];
   public:
   void getdata(char name[50],char name1[50],char name2[50],int year,int year1,int year2,int salary,int salary1,int salary2 ,char address[100],char address1[100],char address2[100])
   {
      this->year=year;
      this->year1=year1;
      this->year2=year2;
      this->salary=salary;
     this->salary1=salary1;
     this->salary2=salary2;
     
      strcpy(this->address,address);
       strcpy(this->address1,address1);
        strcpy(this->address2,address2);
      strcpy(this->name,name);
       strcpy(this->name1,name1);
        strcpy(this->name2,name2);

   }

   void display()
   {
      cout<<"name""      ""address""     ""year""     ""salary"<<endl;
      cout<<name<<"      "<<address<<"    "<<year<<"     "<<salary<<endl;
      cout<<name1<<"      "<<address1<<"    "<<year1<<"    "<<salary1<<endl;
      cout<<name2<<"       "<<address2<<"     "<<year2<<"     "<<salary2<<endl;

      
}

};
int main()
{

system("cls");
int year,year1,year2,salary,salary1,salary2;
char name[50] ,name1[50],name2[50],address[100],address1[100],address2[100];
   

   employees details;
   cout<<"enter your name";
   fflush;
   gets(name);
   gets(name1);
   gets(name2);
 cout<<"enter your address";
   fflush;
  
   gets(address);
    gets(address1);
     gets(address2);
   
   cout<<"enter year of join";
   
   cin>>year;
   cin>>year1;
   cin>>year2;
   
   cout<<"enter salary";
   cin>>salary;
   cin>>salary1;
   cin>>salary2;
   details.getdata(name ,name1, name2,year,year1,year2,salary,salary1,salary2,address,address1,address2);
details.display();
  
   

   return 0; 
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int i,j;
   for(i=1;i<=4;i++){
     for(j=1;j<=i;j++)
      {cout<<"*";}
      cout<<"\n";}
      return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int i,j,k,l,m;
 
 
  
  for(i=0;i<4;i++)
  {
   cout<<"*";
  }
  cout<<endl;
  cout<<" ";
  for(j=0;j<2;j++)
  {
   cout<<"*";
  }
  cout<<endl;
  cout<<" ";
  for(k=0;k<1;k++)
  {
   cout<<"*";
  }
  cout<<endl;
cout<<" ";
  for(l=0;l<2;l++)
  {
   cout<<"*";
  }
  cout<<endl;
for(m=0;m<4;m++)
  {
   cout<<"*";
  }

   
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   float l,b;
   int a;
   cout<<"the length and breadth is";
   cin>>l>>b;
   a=l*b;
   cout<<(int)a;
   return 0;


}*/

/*#include<iostream>
using namespace std;
int main()
{
   int c=12345;
   int x,y,z;
   x=c/10000;
   cout<<x<<endl;
    y=c%10;
    cout<<y<<endl;
    z=x+y;
    cout<<z;
    
   
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int c=5696;
   int x,n,m,o,s;
  x=(c/1000)+2;
  n=((c%1000)/100)+2;
  cout<<x<<endl<<n<<endl;
  m=((c%100)/10)+2;
  cout<<m<<endl;
  o=((c%10)/1)+2;
  cout<<o<<endl;
  s=1000*x+100*n+10*m+1*o;
  cout<<s;

 
 
  
  return 0;
  

}*/
/*#include<iostream>
using namespace std;
int main()
{ int c,x;
   c=12345;
   x=(c/10000)+((c%10000)/1000)+((c%1000)/100)+((c%100)/10)+((c%10)/1);
   cout<<x<<endl;
   
   

return 0;

}*/
/*#include<iostream>
using namespace std;
int main()
{
   int c=1234;
   int i,x,y,z,a;
   x=c/1000;
 y=(c%1000)/100;
  z=(c%100)/10;
 a=(c%10)/1;
 i=1000*a+100*z+10*y+1*x;
 cout<<i;
  
  
   return 0;
}*/
// leap year
/*#include<iostream>
using namespace std;
int main()
{  int y;
cout<<"enter the year";
cin>>y;

if(y%4==0)
{
   cout<<"the year is leap year";
}
else
{
   cout<<"swal is ni bnta";
}
return 0;
}*/
//f or m worker
/*#include<iostream>
using namespace std;
int main()
{
   int a;
   char g;
   cout<<"enter your age";
   cin>>a;
   cout<<"enter your gender f for femal and m for male";
   cin>>g;
   if(g=='f')
   {
      cout<<" You can work in urban areas only";
   }
   else 
   {
      if(a>=20&&a<=40)
      {
         cout<<"You can work anywhere";
      }
      
      if(a>40)
      {
         cout<<"You can only work in urban area";
      }
      if(a<20)
      {
         cout<<"You can't work";
      }
      
   }
   return 0;
}*/

//multiplication table
/*#include<iostream>
using namespace std;
int main()
{
   int t,i,j;
   cout<<"enter the num jiska table chiye";
   cin>>t;
   for(i=1;i<=10;i++)
   { 
      j=t*i;
      cout<<j<<endl;

   }
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{  int i,sum=0;
for(i=1;i<=10;i++)
{
  int x;
  cout<<"enter the num";
  cin>>x;
  sum=sum+x;

}
cout<<"the average is"<<endl<<(sum/10);
return 0;

}*/
/*#include<iostream>
using namespace  std;
int main()
{
   char m;
   for(int i=0;i<=255;i++)
   {  m=i;
      cout<<m<<endl;
   }
   
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{ long int c,i,m=1;
cout<<"enter the value of c";
cin>>c;
  for(i=1;i<=c;i++)
  {
   m=m*i;
   
  }
  cout<<m;
  return 0;

}*/
/*#include<iostream>
using namespace std;
int main()
{
   int i,x,p=1,a=0;
   char c='n';
   for(i=1;c!='q';i++)
   {
      cout<<"enter the number";
      cin>>x;
      p=p*x;
      a=a+x;
      cin>>c;
   }
  
  
   cout<<"the product is"<<endl<<p;
   cout<<"the average is"<<endl<<(a);
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{ 
   int N;
   cin>>N;
   if(N%2==1)
    {
        cout<<"Weird";
    }
    else 
   {
       if(N>=2&&N<=5)
       {
           cout<<"Not weird"<<endl;
       }
       
       else  if(N>=6&&N<=20)
       {
           cout<<"Weird"<<endl;
       }
       else 
       cout<<"Not Weird";
   } 
   return 0;*/
  
  
/*//sum of digit of a number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int c,sum=0,n,i;
   cout<<"Enter the number whose sum you want ";
   cin>>c;
   cout<<"Enter the number of digits in your number";
   cin>>n;
  i=pow(10,n-1);
  
  while(i>=1)
  {
   sum=sum+c/i;
   c=c%i;
   i=i/10;
  }
  cout<<sum;
  return 0;   
}*/
//armstrong number
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int c,i,n,m,sum=0,k;
   cout<<"Enter the number";
   cin>>c;
   cout<<"Enter the number of digit";
   cin>>n;
    i=pow(10,n);
  k=c;
  while(i>=1)
  {m=(c/i)*(c/i)*(c/i);
   sum=sum+m;
   c=c%i;
   i=i/10;
    }
                   // isme thode sudhar ki jrurt h kuki tu age c%10 kre m k ps to bhi same answer aega with alg time complexity.
  
   if(sum!=k)
   {
      cout<<"no";
      cout<<sum;
   }
   else {
      cout<<"yes";
      cout<<sum;
   }

return  0;
}*/
//prime number from one to hundre
/*#include<iostream>
using namespace std;
int isprime(int i)
{
   int j;
  
  
   
   for(j=2;j<i;j++)
   {   
     if(i%j==0)
     return 0;
     
     
   }
   return i;
   
   
}

int main()
{
   int m,i,k;
   for(i=1;i<=100;i++)
   {
      if(isprime(i))
       cout<<i<<" ";
       
   }
   return 0;
}*/
/*#include<iostream>
using namespace std;
int prime(int i)
{
   int j;
   for(j=2;j<i;j++)
   {
      if(i%j==0)
      return 0;
   }
   return i;
}
int main()
{
   int x,k,i,j;
   cout<<"enter the number"<<endl;
   cin>>x;
   //checking for factors of number
   for(i=2;i<=x;i++)
   {if(x%i==0)
  // cout<<"The factors are"<<i<<endl;
     if(prime(i))
    cout<<"pf"<<i;}
   
  

   
   
   return 0;
}*/

/*(functioncall)
#include<iostream>
using namespace std;
int sum(int a,int b)
{
  return a+b;
}
int multi(int a,int b)
{
   return a*b;
}
float peri(int r)
{
    return 2*3.14*r;
   
}
float area(int r)
{
   return 3.14*r*r;
}
int gre(int a,int b,int r)
{
   if(a>=b&&b>=r)
   {
   return a;
   }
   else if(b>=a&&a>=r)
   {
   return b;
   }
   else 
   return r;
}
string even(int a)
{
   if(a%2==0)
   {
      return "even1";
   }
   else 
   return "odd1";
}
string isprime(int a)
{
   for(int i=2;i<=a;i++)
   if(a%i==0)
   {
     return "false"; 
   }
   else 
   return "true";
}
string grades(float m)
{
   if(m>=91&&m<=100)
   return "AA";
   else if(m>=81&&m<=90)
   return "AB";
   else if(m>=71&&m<=80)
   return "BB";
   else if(m>=61&&m<=70)
   return "BC";
   else if(m>=51&&m<=60)
   return "CC";
   else
   return "fail";
}
int fact(int a)
{ int fact=1;
   if(a==0||a==1)
   {
      return 1;
   }
   else if(a<0)
   {
      return 0;
   }
   else 
   for(int i=2;i<=a;i++)
   {
       fact=fact*i;

      
      
   }
   return fact;
}


int main()
{
   int a,b,r;
   float m;
   cout<<"enter the value of a and b";
   cin>>a>>b;
   cout<<"the sum is"<<sum(a,b);
   
   cout<<"the multiply is"<<multi(a,b);
   //cout<<endl<<"enter the radius of circle";
  // cin>>r;
   
  // cout<<"perimeter is"<<peri(r)<<"area is:"<<area(r)<<endl;
   cout<<"checking whichh one is greater"<<endl;
   cout<<"the greater num is:"<<gre(a,b,r)<<endl;
   cout<<"the num is:"<<even(a)<<endl;
  
   cout<<isprime(a);
   cout<<"enter your marks"<<endl;
   cin>>m;
   cout<<"your grades are:"<<grades(m)<<endl;
   cout<<fact(a);



   return 0;
}*/
// recusive function
/*#include<iostream>
using namespace std;
void table(int a,int i)
{
  if(i<=10)
  {
   cout<<i*a;
   cout<<endl;
  }
  table(15,i+1);
  
}
void ispf(int b,int k)
{
   if(b%k==0)
   {
      cout<<k<<endl;
      for(int j=0;j<=k;j++)
   {
      if(k%j!=0)
      cout<<j;
   }
   }
   ispf(20,k+1);
   }
int main()
{
  // system("cls");
  
  
   
   
    ispf(20,1);
    
   // table(15,1); 
   return 0;
  
  
}*/
/*#include<iostream>
using namespace std;
int fibo(int n)
{
   if(n==0)
   {
      return 0;
   }
   else if(n==1)
   {
      return 1;
   }
   else 
   {
     return  fibo(n-1)+fibo(n-2);
   }
}
int main()
{
   cout<<fibo(0);
   cout<<fibo(1);
   cout<<fibo(2);
   cout<<fibo(3);
   cout<<fibo(4);
   cout<<fibo(5);
   cout<<fibo(6);
   return 0;

}*/
/*#include<iostream>
using namespace std;
void isperfect(int a,int i)
{ int sum=0;
  if(a>0&&a<=1000)
    if(i<a)
     {
      if(a%i==0)
       //cout<<a<<" "<<i<<endl;
       sum=sum+i;

       if(sum==a)
       cout<<sum;
       
        isperfect(a,i+1);
     }
     isperfect(a+1,1);
}

int main()
{
   //system("cls");
  isperfect(1,1);
  return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int y,m,d,yy,y1,m1,d1;
   cout<<"enter your date of birth";
   cin>>d;
   cout<<"enter your month of birth";
   cin>>m;
   cout<<"enter your year of birth";
   cin>>y;
   cout<<d<<"-"<<m<<"-"<<y<<endl;
   cout<<"enter  year";
   cin>>yy;
  
  
   y1=yy-y;
   cout<<y1;
  
  m1=y1*12;
  cout<<m1;
  d1=m1*365;
  cout<<d1;
return 0;

}*/
//pointers
/*#include<iostream>
using namespace std;
int main()
{
   int *a,b;
   cout<<"enter the value of b";
   cin>>b;
   cout<<&b<<endl;
   a=&b;
   cout<<*(&b)<<endl;
}*/
/*#include<iostream>
using namespace std;
void co( int *x)
{
   cout<<x;
}
int main()
{
   int x;
   cin>>x;
   co(&x);
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   int *p,*q,*r;
   cout<<"enter the value of a, b and c";
   cin>>a>>b>>c;
   p=&a;
   q=&b;
   r=&c;
   cout<<*p<<*q<<*r;
   if(*p>=*q&&*q>=*r)
   cout<<*p;
   else if(*q>=*p&&*p>=*r)
   cout<<*q;
   else
   cout<<*r;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int n,i,k=1,*m;
   cout<<"enter the value of n";
   cin>>n;
   m=&n;
   if(*m<0)
   {
      cout<<"not exits";
   }
   else if(*m==0||*m==1)

  { 
   cout<<1;
  }
  else 
 {
   for(i=1;i<=n;i++)
   k=i*k;
   cout<<k;
 }
 return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   

   int n,i,*k,g,d=1;
   cout<<"enter the value of n";
   cin>>n;
   k=&n;
   g=*k;
   for(i=n;i!=0;i=i/10)
 {  g=i%10;
   d=d*10+g;
 }
 cout<<d;
   return 0;
}*/
//array
/*#include<iostream>
using namespace std;
int main()
{
  int a[20],num,flag,c=0,k=0,b=0,e=0;
  cout<<"enter the the elements you want in my array";
  for(int i=0;i<20;i++)
   {
      cin>>a[i];
   }
   cout<<"your array is";
   

  for(int i=0;i<20;i++)
 {
  cout<<a[i];
 }
 
  cout<<"enter the number you want to search in my array";
  cin>>num;
  for(int i=0;i<20;i++)
  {
     if(a[i]!=num)
     {
      flag=0;
     }
     else
     {
      cout<<"yp"<<endl;
     }
  }
  for(int i=0;i<20;i++)
  {
   if(a[i]%2==0)
   {
   c=c+1;
   
   cout<<c<<endl;
   cout<<"eben";
   }
   else if(a[i]%2!=0)
   {e=e+1;
   cout<<e<<endl;
   cout<<"odd";
   }
   else if(a[i]>=0)
  { b=b+1;
   cout<<b<<endl;
   cout<<"pos";
  }
   else if(a[i]<0)
   {
      k=k+1;
      cout<<k<<endl;
      cout<<"neg";
   }
  }
  
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,0},b[10],n=10;
   for(int i=0;i<=9;i++)
   {
      
      b[n-1]=a[i];
      n--;
   }
   for(int i=0;i<=9;i++)
   {
      cout<<b[i];
   }
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10},n=1,k=0;
   for(int i=0;i<=9;i++)
   {
     n=n*a[i];
    k=k+a[i];
   }
   cout<<n;
   cout<<k;
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[3][3]={{1,2,3},{4,5,6}};
   for(int i=0;i<3;i++)
     for(int j=0;j<3;j++)
     { cout<<a[i][j];
       
       
       }
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,2,3,4,5},n=0,m,d;
   for(int i=0;i<=4;i++)
   {
      if(a[i]>=a[n])
      {
      m=a[i];}
      
      if(a[i]>=a[n])
      {
         d=a[i];
      }
    n++;  
   }
   cout<<m;

return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,2,3,2,1},n=4;
   for(int i=0;i<5;i++)
   {
      if(a[n]==a[i])
      cout<<"yes";
      n--;
   }
cout<<"no";
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9};
   int b[5],c[5],i,j=0,k=0;
  
  for(i=0;i<10;i++)
  {
   if(i<5)
   {
      b[j]=a[i];
      j++;
   }
   else{
      c[k]=a[i];
      k++;
   }
  }
  for(int m=0;m<5;m++)
  {
   cout<<b[m];
  }
   for(int m=0;m<5;m++)
   {
      cout<<b[m];
   }

  
 
   return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,2,3,4,5};
   for(int i=0;i<5;i++)
   {
      for(int j=1;j<5;j++)
      {
         int c=a[i]-a[j];
         cout<<c<<endl;
      }
   }
   return 0;
   
    
}*/
/*#include<iostream>
using namespace std;
int main()
{  int c=0;
   int a[10]={1,2,3,4,5,6,7,8,9,0};
   for(int i=3;i<=9;i++)
   {
      cout<<a[i];
      c=c+a[i];
   }
   cout<<c;
return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{ int a[5]={1,2,3,4,5},n=a[4],i;


   for( i=4;i>=1;--i)
   {
      
      a[i]=a[i-1];
}
a[0]=n;
for(int j=0;j<5;++j)
{
   cout<<a[j];
}
  
 return 0;}*/
 
 /*#include<iostream>
 using namespace std;
 int main()
 {
   
   string me="hello world";
   
   for(int i=0;i<me.length();i++)
   {
      if(me[i]=='o')
      {
         cout<<i<<endl;
      }
   }


   
   return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 int main()
 {
   string a;
   cout<<"enter the string a";
   cin>>a;
   for(int i=0;i<a.length();i++)
   
   cout<<a[i]<<endl;
   return 0;
 }*/
/*#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
   string a,b;
   cout<<"enter a string i love candies";
    getline(cin,a);
   cout<<a;
   b=a;
   cout<<b;
   return 0;


 }*/
 /*#include<iostream>
 using namespace std;
 int main()
 {
   string a="chata";
   for(int i=0;i<a.length();i++)
   {
      if(a[i]=='t')
      {
         cout<<i;
      }
     
     

   }
   return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 int main()
 {  
   string a="khushi";
   string b="kumari";
   string c="jha";
   string d,e;
  
  for(int i=0;i<a.length();i++)
  {
         d=a[0];
  }
  for(int i=0;i<a.length();i++)
  
  {
       e=b[0];
  }
    string m=d+'.'+e+'.'+c;
    cout<<m;
  
   return 0;
 }*/
 
 /*#include<iostream>
 using namespace std;
 int main()
 {
   string a="hello";
   int m=0;
   
   for(int i=4;i>=0;--i)
   {
      cout<<a[i];
   }
   return 0;
 }*/
 /*#include<iostream>
 using namespace std;

 int main()
 {
   string a="this is umbrella";
   string b="is";
   for(int i=0;i<a.length();i++)
   {
      if(a[i]=='e'||a[i]==b)
      {
         cout<<i;
      }
   }
   return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 int main()
 {
   string a[5][7]={"khushi","mamta","amlesh","rishabh"};
   for(int i=0;i<5;i++)
     for(int j=0;j<7;j++)
     cout<<a[i][j]<<" ";

  return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 # define area(l,b) (l*b)
 #define peri(l,b) (2*(l+b))
 #define comp(a,b) (a<b)
 #define avg(a,b)  ((a+b)/2)
 #define abs(a)   ((a>0)?(-1*a):(a))
 #define pi(p,r,t) ( (p*r*t)/100.00)
 int main()
 {
   
   cout<<"the area is"<<area(3,4)<<"the perimeter is"<<peri(3,4);
   cout<<"the compare is"<<comp(3,4)<<"the average of two number is"<<avg(3,4)<<"the abs is"<<abs(-5);
   cout<<"pi is"<<pi(3,1,2);
   return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 struct student
 {
   int roll_no;
   char name[10];
   int age;
   int marks;
 };
 int main()
 {  
   struct student p1={1,"khushi",19,616};
   cout<<p1.roll_no<<endl<<p1.name<<endl<<p1.age<<endl<<p1.marks;
   return 0;
   
 }*/

 /*#include<iostream>
 using namespace std;
 struct student
 {
   int rollno;
   char name[10];
   int age;
 };
 
 int main()
 {
   struct student stu[5];

   for(int i=0;i<5;i++)
   {
      cout<<"stduent "<< i+1<<endl;
      stu[i].rollno=i+1;
      cout<<"Enter your name";
      cin>>stu[i].name;
      cout<<"Ebter your age";
      cin>>stu[i].age;
      
      }

      for(int i=2;i==2;i++)
      {   
         cout<<"student detail of "<<i+1<<"is";
         cout<<"Student name is "<<stu[i].name;
         cout<<"Your age is "<<stu[i].age;
      }
      return 0;

 }*/
 /*#include<iostream>
 using namespace std;
 struct student
 {
   int rollno;
   char name[20];
   char add[50];
   int age;
   int marks;

 };
 
 int main()
 {
   struct student st[15];
   
   for(int i=0;i<15;i++)
   {
      cout<<"Student "<<i+1<<endl;
      st[i].rollno=i+1;
      cout<<"Enter your name"<<endl;
      cin>>st[i].name;
      cout<<"Enter your address"<<endl;
      cin>>st[i].add;
      cout<<"Enter your age"<<endl;
      cin>>st[i].age;
      cout<<"Enter your marks"<<endl;
      cin>>st[i].marks;
      }

      for(int i=0;i<15;i++)
      {
         cout<<"your name is"<<st[i].name;
         cout<<"Your address is"<<st[i].add;
         cout<<"Enter your age"<<st[i].age;
         cout<<"Enter your marks"<<st[i].marks;
      }
  
   return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 struct feet
 {
   int inch;
   int feet;
 };
 
 
  struct feet add(struct feet f1,struct feet f2)
 {
   struct feet d;
   d.feet=f1.feet+f2.feet;
   if((f1.inch+f2.inch)>=12)
   {
      d.feet = f1.feet + (f1.inch+f2.inch)/12 ;
   }
   else
   {
      d.inch=f1.inch+f2.inch;
   }

 return d;



 }
 
 int main()
 {
   struct feet f1={12,6};
   struct feet f2={5,8};

   struct feet f=add(f1,f2);

   cout<<f.feet<<"feet and "<<f.inch<<"inch"<<endl;
   return 0;
   
}*/
/*#include<iostream>
using namespace std;

struct marks 
{
   int rollno;
   string name;
   int chem_marks;
   int phy_marks;
   int maths_marks;

};

int main()
{
  struct marks st[5];

  for(int i = 0 ; i < 5; i++)
  {

   cout<<"Student "<<i+1<<endl;
   st[i].rollno = i + 1;

   cout<<"Enter student's name";
   cin>>st[i].name;

   cout<<"Enter student's chemistry marks";
   cin>>st[i].chem_marks;

   cout<<"Enter student's maths marks";
   cin>>st[i].maths_marks;

   cout<<"Enter student's physics marks";
   cin>>st[i].phy_marks;
 
  }

  for(int i = 0 ; i < 5 ; i++)
  {
     cout<<st[i].name<<",your percentage is below "<<endl;
     float d = ((st[i].chem_marks + st[i].maths_marks + st[i].phy_marks) *100) / 300 ;
     cout<<d;
     
  }
  return 0;
}*/

/*#include<iostream>
using namespace std;

struct  complex 
{
   int real;
   int img;
};

struct complex add( struct complex a , struct complex b)
{
   struct complex d;
   
   d.real = a.real + b.real;
   d.img  = a.img + b.img;

   return d;
}

struct complex sub( struct complex a , struct complex b)
{
   struct complex d;
   
   d.real = a.real + b.real;
   d.img  = a.img - b.img;

   return d;
}

struct complex muli( struct complex a , struct complex b)
{
   struct complex d;
   
   d.real = ( a.real * b.real ) - ( a.img + b.img );
   d.img  =  ( a.img + b.img ) + (a.img + b.img );

   return d;
}

int main()
{  
   struct complex d1 = {3,4};
   struct complex d2 = {2,1};

   struct complex e = add( d1, d2 );
   struct complex d = sub( d1 , d2 );
   struct complex g = muli( d1 , d2 );

   cout<<"The addition is "<<e.real <<"+"<<e.img<<"i"<<endl;
   cout<<"The subtraction is "<<d.real<<"+"<<d.img<<"i"<<endl;
   cout<<"The multiplication is "<<g.real<<"+"<<g.img<<"i"<<endl;

   return 0;


}*/

/*#include<iostream>
using namespace std;

struct student
{
   int roll_num;
   string name;
   int age;

};

string stu1(string  a)
{
   
   
   return a;
}

string stu(string  a)
{
   
   
   return a;
}



int main()
{
   struct student st;

   
   
 
 
   for(int i = 0 ; i < 5 ;i++)
   {   
      cout<<"Enter your age "<<endl;
      cin>>st.age;

       if(st.age >= 11 && st.age <= 14)
       {
      cout<<"Student "<<i+1<<endl;
      cout<<"Enter your name "<<endl;
      cin>>st.name;
      st.roll_num = i+1;
      
      
   
     }

   
   

   if( st.roll_num%2 == 0)
   {
      cout<<stu1(st.name)<<endl;
   }

   if(st.age == 14)
   {
   cout<<stu(st.name)<<endl;
   }
   
}
return 0 ;

}*/

/*#include<iostream>
using namespace std;

struct customers
{
  long int account_number;
  string name;
  int balance;
};

string call1(string name)
{
   return name;
}

 long int call(int long  n)
{
   return n + 100;
}

int main()
{
   struct customers cust[10];

   for( int i = 0; i < 10 ; i++)
   {
      cout<<"Customer "<<i+1;

      cout<<"Enter your name ";
      cin>>cust[i].name;

      cout<<"Enter your account number ";
      cin>>cust[i].account_number;

      cout<<"Enter your balance ";
      cin>>cust[i].balance;

      if(cust[i].balance <= 2000 )
      {
         cout<<call(cust[i].balance);
      }

      if(cust[i].balance == 1000)
      {
         cout<<call1(cust[i].name);
      }

      
}

return 0 ;
}*/

/*#include<iostream>
using namespace std;

struct date
{
   int day;
   int year;
   string month[12];
};

int main()
{
  struct date d1 = {22 , 2003 , "jul"};
   struct date d2 = {22 , 2003 , "jul"};

  
    
    for(int i = 0; i < 12 ; i++)
    {
      cin>>d1.month[i];
    }
    for(int i = 0; i<12 ;i++)
    {
      cout<<d1.month[i];
    }

   int n;
     d1.month=d1.month[6];
    
    
   if( d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
     cout<<"yes";
   else 
     cout<<"no"; 

     cout<<"Enter number of days you want to increase";
     cin>>n; 
     cout<<d1.month;
     for(int i = 0 ; i < n; i++)
     {  
      if(d1.day<31)
      {
           d1.day++;
          // cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year;
       }
       else 
        {
         for( int j = 0 ; j < 12  ; j++ )
         {
           d1.month[j] =d1.month[j+1];
         }

        }
     }
     // cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;
     return 0;


}*/

/*#include<iostream>
using namespace std;

struct employee
{
   string name;
   int salary;
   int hrs;
};

int main()
{
   struct employee d;

   for( int i = 0 ; i < 10 ; i++)
   {
      cout<<"Employee"<<i++;
      cout<<"Enter your name , salry and hours of work";
      cin>>d.name>>d.salary>>d.hrs;
      if(d.hrs <= 8)
      {
        cout<<d.name<<endl<<"$"<<d.salary+50;
      }
      else if( d.hrs > 8 && d.hrs <= 10)
      {
         cout<<d.name<<endl<<"$"<<d.salary+100;
      }
      else
      {
        cout<<d.name<<endl<<"$"<<d.salary+500;
      }
   }
   return 0;
}*/
/*#include<iostream>
using namespace std;
 class student
 {
   private:
     string name;
     int roll_num;
   public:
    void getdata( string name , int roll_num )
    {
           this->name = name;
           this->roll_num = roll_num;
    }
    void display()
    {
       cout<<"Your name is"<<endl;
       cout<<this->name<<endl<<this->roll_num;      
    } 

 };

int main()
{
  student stu,stu2;
    string name;
    int roll_num; 
    cout<<"Enter your name and roll number";
    cin>>name>>roll_num;
    stu.getdata(name , roll_num);
     stu.display();

    cout<<"Enter your name and roll number";
    cin>>name>>roll_num;
    stu2.getdata(name , roll_num);
    stu2.display();
   
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
class triangle
{ private:
int a,b,c;
  public:
  void printarea(int a , int b , int c)
  {
     this->a = a ;
     this->b = b ;
     this->c = c ;

     int s = (a + b +c ) / 2;
      cout<<sqrt(s*s);
  }
    
};
int main()
{
  triangle side;
    side.printarea(1 , 2 , 3);
    return 0;
}*/

/*#include<iostream>
using namespace std;
class triangle
{   private:
    int a,b,c;

    public:
   triangle( int a , int b , int c)
   {
     this->a = a ;
     this->b = b ;
     this->c = c ;
   }

   void display()
   {
      cout<<( this->a + this->b + this->c ) / 2;
   }

};

int main()
{ 
   triangle tri(1,2,3);
   tri.display();
  return 0;
}*/

/*#include<iostream>
using namespace std;
class rectangle
{ 
   private:
   int a , b ;
   public:
   rectangle(int a ,int b)
   {
      this->a = a ;
      this->b = b ;
     // this->c = c ;
      cout<<(a+b)<<endl;
   }

};
int main()
{
  rectangle rect(5 , 10);
  rectangle rect1(1 , 12);
  return 0;
}*/

/*#include<iostream>
using namespace std;

class r
{ 
   private:
    int a , b;
  public:
   r(int a , int b)
   {  
      this->a = a ;
      this->b = b ;

   }
   int display()
   {
      return a*b ;
   }
};
int main()
{
   int a,b;
   cout<<"enter the lenght and breadth of rectangle";
   cin>>a>>b;

   r r1(a,b);
   cout<<r1.display();
   return 0;

}*/

/*#include<iostream>
using namespace std;
class average
{  
  private:
   int a , b , c; 
  public:
  static float cal(int a  , int b , int c)
   {
     return (a + b  + c) / 3;
   } 
  
  

};
int main()
{
  
  int a , b , c ;
  cout<<"Please enter the marks of all three subjects";
  cin>>a>>b>>c;
  cout<<"The average marks is "<<average::cal(a , b , c);


}*/

/*#include<iostream>
using namespace std;
class complex 
{
 private:
  int r , i;
 public:
  complex(int r ,int i)
   {
      this->r = r;
      this->i = i;
   }
   void add(complex c1)
   {
      int d ;
      d = (r +c1.r); int m= (i + c1.i);
      cout<<d<<"+"<<m<<"i"<<endl;
   }
   void diff(complex c1)
   {
      int d ,m;
      d = (r + c1.r);
      m = (i +c1.i);
      cout<<d<<"-"<<m<<"i"<<endl;

   }
   void pro(complex c1)
   {
      int d ,m;
      d=(r*c1.r);
      cout<<d; 
         }
};
int main()
{
  complex c(2,3);
  complex c1(1,2);

  c.add(c1);
  c.diff(c1);
  c.pro(c1);

  
  return 0;
}*/
/*#include<iostream>
using namespace std;

class employee
{  private:
   string name,year_of_join,address;
   public:
   void emp(string name , string year_of_join, string address)
   {
      this->name = name;
      this->year_of_join = year_of_join;
      this->address = address;

   }
   void display()
   {
    
    
     cout<<this->name<<"  "<<this->year_of_join<<"   "<<this->address<<endl;
   }

 
};

int main()
{
    employee  e1 ,e2,e3;
    e1.emp("khushi","2003","dwarka mor");
    e2.emp("khushbu","2004","dwarka");
    e3.emp("khush","2005","dwarka sector-14");
    cout<<"Name  "<<"Year of join  "<<"Address"<<endl;
    e1.display();
    e2.display();
    e3.display();

    return 0;
}*/
/*#include<iostream>
using namespace std;
class over
{
  int a,b;
  over operator +(const over& i)
  {
   over temp;
   temp.a = i.a +a;
   temp.b = i.b +b;
   return temp;

  }
};
int main()
{
 over o1,o2;
 o2+o1;
}*/
/*#include<iostream>
using namespace std;
class employee
{ 
   private:
   int salary , hrs;
   public:

   employee(int salary , int hrs)
   {
      this->salary = salary;
      this->hrs = hrs;
   }
   void getinfo()
   {
    
    cout<<"your salary is"<<this->salary<<endl<<"Numbers of hours your work is"<<this->hrs<<endl;
   }
   void addsal()
   {
     if(this->salary < 500)
     {
      cout<<this->salary + 100;
     }
    else
    {
      cout<<this->salary;
    }
   
   }
   void addwork()
   {
      if(hrs > 6)
      {
         cout<<this->salary + 10;
      }
      else
      {
        cout<<this->salary;
      }

   }
 
};
int main()
{
   
   
   int salary,hrs;
   cout<<"Enter your salary and the numberss of you work";
   employee e(salary , hrs);
   cin>>salary>>hrs;
   e.getinfo();
   e.addsal();
   e.addwork();


return 0;
 

}*/

/*#include<iostream>
using namespace std;
class parent
{
  public:
  void print_p()
  {
   cout<<"I am parent";
  }
};
class child:public parent
{
  public:
  void child_c()
  {
   cout<<"I am child";
  }
};
int main()
{
   parent p;
   child c;
   p.print_p();
   c.child_c();
   c.print_p();
  return 0 ;
}*/

/*#include<iostream>
using namespace std;
class member
{ 
   private:
   string name,phone,address;
   int age;
   public:
   void getdata(string name , int age , string phone ,string address)
   {
      this->name=name;
      this->address=address;
      this->age=age;
      this->phone=phone;
   }

   void display_p()
   {
      cout<<"Employee name is"<<this->name<<endl;
      cout<<"Employee age is"<<this->age<<endl;
      cout<<"Employee address is"<<this->address<<endl;
      cout<<"Employee mobile number"<<this->phone<<endl;
   }

};
class employee:public member
{  private:
   string spec;
   public:
  void getdata(string spec)
  {
    this->spec=spec;
  }
  void display()
  {
   cout<<"Emplyee spec is"<<this->spec;
  }
};
class manager:public member
{
  private:
  string d;
  public:
  void getdata(string d)
  {
   this->d=d;
  }
  void display()
  {
   cout<<"Employe d is"<<d;
  }
 
  
};
int main()
{ 
   string name ,phone,address,spec,desig,d;
   int age;
   member m;
   employee e;
   manager ma;
   cout<<endl;
   cout<<"Enter your Name";
   cin>>name;
   cout<<endl;
   cout<<"Enter youe mobile number";
   cin>>phone;
   cout<<endl;
   cout<<"Enter your address";
   cin>>address;
   cout<<endl;
   cout<<"Enter your age";
   cin>>age;
   
   cout<<"Enter your post";
   cin>>desig;

   if(desig == "employee" || desig == "EMPLOEE");
   {  cin>>spec;
      m.getdata(name ,  age , phone , address);
      e.getdata(spec);
      e.display();
      m.display_p();
   }
   if(desig == "manager" || desig == "MANAGER")
   {   cin>>d;
       m.getdata(name ,  age , phone , address);
       ma.getdata(d);
       ma.display();
       m.display_p();

   }

   return 0;

  
}*/
/*#include<iostream>
using namespace std;
class shape
{  
   public:
   void print1()
   {
      cout<<"I am shape"<<endl;
   }

};
class rectangle: public shape
{
   public:
   void print2()
   {
      cout<<"I am rectangle"<<endl;
   }

};

class circle: public shape
{
   public:
   void print3()
   {
      cout<<"I am circle"<<endl;
   }

};

class square : public rectangle
{ 
   public:
   void print4()
   {
      cout<<"I am square"<<endl;
   }

};

int main()
{
   system("cls");
   shape s;
   rectangle r;
   square sq;
   circle c;
   s.print1();
   r.print2();
   sq.print4();
   c.print3();
   sq.print1();
   sq.print2();
   
   return 0;
}*/

/*#include<iostream>
using namespace std;
class student
{
  private:
  string s;
  public:
  student(string s)
  {
   this->s = s ;
  }
  student()
  {
   this->s = "unknown" ;
  }

  void print()
  {
   cout<<this->s;
  }
};
int main()
{
   student s1("khushi");
   student s2;
   s1.print();
   s2.print();

return 0;
}*/

/*#include<iostream>
using namespace std;
class rectangle
{
  private :
  int l ,b;
  public:
  rectangle()
  {
   l = 0 ;
   b = 0 ;
  }
  rectangle(int l , int b)
  {
   this->l = l;
   this->b = b;
  }

  rectangle(int a)
  {
   l = b =a;
  }
  void print()
  {
   cout<<l*b<<endl;
  }
};
int main()
{
  rectangle r1;
  rectangle r2(2,3) ,r3(2);

  r1.print();
  r2.print();
  r3.print();

}*/

/*#include<iostream>
using namespace std;
class bank
{
   private:
   int s ,i =90;
   public:
   bank(int s)
   {
      this->s = s;
      i= i + s;
   }
   bank()
   {
      s = i ;
   }
   void print()
   {
      cout<<i<<endl;
   }
};
int main()
{
   bank save(90);
   bank saveji;
   save.print();
   saveji.print();

   return 0;
}*/

/*#include<iostream>
using namespace std;
class program
{
  private:
  string s;
  public:
  program()
  {
    s = "progarmming";
  }
  program(string s)
  {
   this->s = s ;
  }
  void print()
  {
    cout<<"i love"<<" "<<s<<endl;
  }
};
int main()
{
  program p1;
  program p2("cpp");
  p1.print();
  p2.print();
}*/

/*#include<iostream>
using namespace std;
class printy
{ 
   private:
   int a;
   float b;
   string j;
   char m;

   public:
   void print(string j)
   {
      this->j = j;
   }
   void print(int a)
   {
      this->a = a;
   }
   void print(float b)
   {
      this->b = b; 
   }
   void print(char m )
   {
      this->m  = m ;
   }

   void display()
   {
      cout<<this->j;
      cout<<this->a;
      cout<<this->b;
      cout<<this->m;
   }
};
int main()
{ 
   printy p1 ; 
   p1.print("khushi");
   p1.print(1);
   p1.print(2.2);
   p1.print('k');

   p1.display();

return 0;
}*/

/*#include<iostream>
using namespace std;
class mis
{
  private :
  int a ; char m;
  
  public:
  void print( int a , char m )
  {
   this->a  = a;
   this->m = m;
  }

  void print( char m , int a)
  {
   this->a = a;
   this->m = m;
  }

  void display()
  {
   cout<<m<<" "<<a<<endl;
  }
};
int main()
{
  mis m1;
  m1.print( 1 ,'k');
  m1.display();
  m1.print( 'h' , 2);
  m1.display();

}*/

/*#include<iostream>
using namespace std;

class yaar
{
  private:
  int l , b ;

  public:
  void rect(int l , int b)
  {
   this->l = l ;
   this->b = b;
  }

  void rect(int l )
  {
   this->l = l;
   b = l;
  }

  void display()
  {
   cout<<l*b<<endl;
  }

};
int main()
{ 
   yaar r;
   r.rect( 2 , 3);
   r.display();
   r.rect(2);
   r.display();
   return 0 ;

}*/

/*#include<iostream>
using namespace std;
class degree
{
   public:
   void getdegree()
   {
      cout<<"i got degree";
   }

};

class undergraduate:public degree
{
   public:
  void getdegree()
  {
   cout<<"i am ug";
  }
};

class postgraduate:public degree
{
   public:
   void getdegree()
   {
      cout<<"i am pg";
   }

};

int main()
{
  degree d;
  undergraduate u;
  postgraduate p ;
  d.getdegree();
  u.getdegree();
  p.getdegree();
  return 0 ;
}*/

/*#include<iostream>
using namespace std;
class bank
{
  
};

class A:public bank
{  
   public:
   void getbalance( int a)
   {
      cout<<a<<endl;
   }
};

class B:public bank
{  public:
   void getbalance( int b )
   {
      cout<<b<<endl;
   }

};

class C:public bank
{  public:
   void getbalance(int c)
   {
      cout<<c<<endl;
   }
};
int main()
{
  bank b;
  A a;
  B b1;
  C c;
  
  a.getbalance(2000);
  b1.getbalance(1000);
  c.getbalance(4000);

  return 0;
}*/

/*#include<iostream>
using namespace std;

class employees 
{
  private:
  string name ,date;
  int salary;
  public:
  void getdata( string name , int salary , string date)
  {
   this->name = name;
   this->salary = salary;
   this->date = date;
  }

  void display()
  {
   cout<<name<<endl<<date<<endl<<salary<<endl;
  }

};

int main()
{
   employees e[10];
   string name , date;
   int salary;
   for( int i = 0 ; i < 10 ; i++)
   {
      cout<<"Enter your name";
      cin>>name;
      cout<<"Enter your salary";
      cin>>salary;
      cout<<"Enter your date of joining";
      cin>>date;

      e[i].getdata( name  , salary  , date);
      e[i].display();

   }
   return 0;

}*/

/*#include<iostream>
using namespace std;

class students
{
  int maths , chem , phy , roll_num , i;

  public:
  void getdata(int maths , int chem , int phy ,int i)
  {
   this->maths= maths ;
   this->phy = phy;
   this->chem = chem ;
   this->i = i;
  }
  void display()
  {
   int avg ;
   cout<<"Your roll number is"<<i+1<<endl;
   roll_num = i+1;

   avg  = (maths + phy + chem ) / 3;
   cout<<"The average marks you have scored is"<<avg<<endl;


  }

};
int main()
{
   int roll_num , maths , chem , phy , total;
   students s[8];
   for(int i = 0 ; i < 8 ; i++)
   {
      
      cout<<"Enter your maths marks:";
      cin>>maths;
      cout<<"Enter your chmistry marks:";
      cin>>chem;
      cout<<"Enter your physics mark:";
      cin>>phy;
      s[i].getdata(maths , chem ,phy , i);
      s[i].display();
   }
   return 0;
}*/

/*#include<iostream>
using namespace std;
class mam
{
  public:
  /*static void print()
  {
   cout<<"I am mammals"<<endl;
  }*/
 /* void print()
  {
   cout<<"I am mammals"<<endl;
  }
}/

class marine_animals
{ 
   public:
  /* static void print()
   {
      cout<<"I am marine animals"<<endl;
   }*/

  /* void print()
   {
      cout<<"I am marine animals"<<endl;
   }
};*/

/*class whale:public mam, public marine_animals
{
   public:
   /*static void print()
   {
      cout<<"I am both"<<endl;
   }*/
   void print1()
  /* {
      cout<<"I am both"<<endl;
   }

   
};*/
/*
int main()
{
   /*mammmals::print();
   marine_animals::print();
   whale::print();*/
    
   /*mam m;
   whale w;
   marine_animals ma;
   w.mam::print();
   m.print();
   ma.print();
   w.print1();
   w.marine_animals::print();
   


   return 0;
}*/

/*#include<iostream>
using namespace std;

class apple
{ 
   private:
   int a;
   public:
   apple( int a)
   {
     this->a = a;
   }

   int display()
   {
      return this->a;
   }

};
class mango
{  
   private:
   int a1;
   public:
   mango( int a1)
   {
      this->a1 = a1;
   }
   int display()
   {
      return this->a1;
   }
};

class fruit : public apple , public mango
{ 
  private:
   int i , j ,a2 ;
  public:

  fruit(int i ,int j)
  {
    this->i = i;
    this->j = j;
  }
  void display()
  {
    this->a2 = this->j + this->i;
  }
};

int main()
 { 
    apple a(20);
    mango m(90);
    
  int i =  a.display();
  int j =  m.display();
  fruit f(i , j);
  f.display();
  
  return 0;
 }*/
  
/*---------------------------------------------Mission completed----------------------------------------------------------------------------------------------------*/
 