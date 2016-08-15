/*#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <list>
using namespace std;
class A
{
public:
	void foo()
	{
		cout<<"A foo()"<<endl;
	}

};
class B
{
public:
	void foo()
	{
		cout<<"B foo()"<<endl;
	}
};
class D
{
	private:
		int m_data;
	public:
		D(int data)
		{
			m_data  = data;
		}
};
class C : public A,public B
{
	public:
	C(int data = 2):B(1),D(0)
	{
		m_data = data;
	}
	
protected:
	int m_data;
	public:
	void foo()
	{
		cout<<"C foo()"<<endl;
	}
};
int max(int x,int y)
{
	return x>y?x:y;
}

class Container{ 

    public: 

    void print(){ 

        printf("printf()"); 

    } 

}; 




char * right(char *p,int n)
{
	char *first,*save,tem[100];
	int len;
	len=strlen(p);
	if (len<=0)
	{
		printf("the char[] is empty!\n");
		return p;
	}
	first = p;
	save = p;
	if(n>=len)
	{
		n = n-strlen(p);
	}
	int i =0;
	while(n)
	{
		tem[i] = first[i];
		first[i] = save[len-n];
		first[len-n] = tem[i];	
		n--;
		i++;	
	}
	return first;
	

}
#define MAX_LEN 100
void LoopMove(char * p ,int steps)
{
	int n = strlen(p) - steps;
	char tem[MAX_LEN];
	strcpy(tem,p+n);
	strcpy(tem+steps,p);
	*(tem+strlen(p)) = 0;
	strcpy(p,tem);

}
#define MAX 255
void print(vector<int>n)
{
	cout<<"\n vector size is:"<<n.size()<<endl;
	//vector<int>::iterator p = n.begin();
}
int count(int data)
{
	int count = 0;
	while(data)
	{
		data = (data) &(data-1);
		count++;

	}
	return count;
}
int main() 

{ 
	int i;    
	for (i = 0; i < 2; i++) 
	{         
		fork();         
		printf("-");
	} 
   return 0; 

} */
/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int totalNum,timeLimit,selectNumCount;
    int data;
    int count = 0;
    int sum = 0;
    vector<int>value;
    while(cin>>totalNum>>timeLimit>>selectNumCount)
    {
        value.clear();
        for (int i = 0;i<totalNum;i++)
        {
            cin>>data;
            value.push_back(data);           
        }
        for (int i=0;i<selectNumCount;i++)
        {
            sum +=value.at(i);         
        }
        if (sum<timeLimit)
            count++;
        for(int i = 0;i<(totalNum-selectNumCount+1);i++)
        {
            sum -=value.at(i);
            sum +=value.at(i+selectNumCount-1);
            if (sum<timeLimit)
            	count++;      
        }
        cout<<count<<endl;
    }    
}*/
/*#include <iostream>
#include <set>
#include <math.h>
using namespace std;
int main()
{
    int pointCount;
    int x,y;
    int min;
    set<int>value;
    while(cin>>pointCount)
    {
        for (int i = 0;i<pointCount;i++)
        {
            cin>>x>>y;
            value.insert(abs(x));
            value.insert(abs(y));           
        }
        set<int>::reverse_iterator p = value.rend();
		p++;
        min = (*p)*(*p);
        cout<<min<<endl;   
    }
    
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int data;
    char str[100];
    
   while(cin>>data){ 
	int c,count= 0;  
    while(data)
    {
       c = data%10;
       str[count] = c+'0';  
       count++;
       data = data/10;                  
    }
    str[count] = '\0';
	printf("%s\n",str);
   }    
}*///数字反序按字符输出
/*#include <iostream>
#include<set>
using namespace std;
int main()
{
    int charCount;
    char data;
    set <char> cset;
    while(cin>>charCount)
    {
        cset.clear();
       for(int i = 0;i<charCount;i++)
       {
           cin>>data;
           cset.insert(data);         
       }
        cout<<cset.size()<<endl;
        
    }   
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string data;
    while (cin>>str)
    {
		data.clear();
        for(int i = str.size()-1;i>=0;i--)
        {
			if(data.find(str[i])!=string::npos)
               ;
            else
                {
                data +=str[i];
            }             
        } 
		cout<<data<<endl;
    }    
}*///输入整数，逆序输出且不含重复的数字
/*#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string str;
    string temp;
    stack<char>cstack;
    while(getline(cin,str))
    {
        temp.clear();
        for(int i=str.size()-1;i>=0;i--)
        {
           
           if(str[i]==' ')
           {
               while(!cstack.empty())
               {
                   temp+=cstack.top();
                   cstack.pop();
                   
               }
               temp+=' ';             
           } 
           else 
            cstack.push(str[i]);          
        }
        while(!cstack.empty())
        {
                   temp+=cstack.top();
                   cstack.pop();
                   
        }            
        cout<<temp<<endl;
        
    }
    
}*/
/*#include <iostream> 
using namespace std; 
int main(void)
{    
    long int input;    //
    //cin >> input;    
    while (cin >> input)    
    {        
        while (input != 1)        
        {            
            for (int i = 2; i <= input; i++)            
            {                
                if (input % i == 0)                
                {                   
                    input /= i;                   
                    cout << i << ' ';                    
                    break;                
                }            
            }        
        }             
    }                   
    return 0;
}*/
/*#include <iostream>
#include <string>
#include <sstream>
using namespace std; 
int main() 
{    
    string s;    
    getline(cin,s);    
    stringstream ss(s);    
    string res="", tmp;   
    while (ss>>tmp) 
    {        
        if (res=="")           
            res=tmp;       
        else            
            res=tmp+" "+res;    
    }    
    cout<<res;    
    return 0;
}*/
/*#include<iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string data1,data2;
    string saveValue;
    int flag=0;
    int value;
    int count;
    while(cin>>data1>>data2){
    if(data1.size()==0||data2.size()==0)
        return 0;
    saveValue.clear();
    flag=0;
    count = data1.size()-data2.size();
    if(count>=0)
    {
        for(int i=0;i<count;i++)
            data2.insert(data2.begin(),'0');
    }
    else
    {
        for(int i=0;i<abs(count);i++)
            data1.insert(data1.begin(),'0');
    }
	cout<<data1.size()<<endl;
	cout<<data2.size()<<endl;
        for(int i= data1.size()-1;i>=0;i--)
        {
            if(flag)
            {
                flag = 0;
                value = (data1[i]-'0')+(data2[i]-'0')+1;
                
            }
                
            else
            	value = (data1[i]-'0')+(data2[i]-'0');
            if(value>=10)
            {
                flag = 1;
                saveValue.insert(saveValue.begin(),((value-10)+'0'));
                if(i==0)
                    saveValue.insert(saveValue.begin(),'1');
                
            }
            else
                saveValue.insert(saveValue.begin(),(value+'0'));           
        }
	
    cout<<saveValue<<endl;
}
    
    
}*///两个大数相加
/*#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
    int count;
    int mapped_data;
    pair<int,int>data;
    multimap<int,int>map_data;
    map<int,int>save_data;
    while(cin>>count){
    for(int i =0 ;i<count;i++)
    {
        cin>>data.first;
        cin>>data.second;
        map_data.insert(data);       
    }
    
    for(multimap<int,int>::iterator p1 = map_data.begin();p1!=map_data.end();)
    {
        mapped_data = 0;
        int key_count = map_data.count(p1->first);
		//cout<<"key_count:"<<key_count<<endl;
        if(key_count>1)
        {
			int key = p1->first;
            for(int i=0;i<key_count;i++)
            {
                mapped_data +=p1->second;
                p1++;
                
            }
			//cout<<"mapped_data:"<<mapped_data<<endl;
            save_data[key] = mapped_data;         
        }
        else{
           save_data[p1->first] = p1->second;
		   p1++;
        }    
    }
    map<int,int>::iterator p2 = save_data.begin();
    while(p2 != save_data.end())
    {
        cout<<p2->first<<' '<<p2->second;
        p2++;
         cout<<endl;
    }
   
    }
      
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	
    int ans = 0;
    int dic[256];
	string s;
	string subs;
    memset(dic,-1,sizeof(dic));
	cin>>s;
    int len = s.size();
    int idx = -1;
    
    for (int i=0;i<len;i++)
    {
      char c = s[i];
      if (dic[c]>idx)
        ;
	  else 
	  {
		  subs+=c;
		  dic[c] = i;
	  }
	  
      
      //ans = max(ans,i-idx);
    }
    
    //cout<<ans<<endl;
	cout<<subs<<endl;
	cout<<subs.length()<<endl;
  
}*///最长无重复字符子串，且它的长度
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
	while(cin>>str)
	{
		int size  = str.size();
		char c = 'a';
		string::size_type  pos = 0;
		pos = str.find(c);
		while(pos !=string::npos)
	    {
			str.erase(pos,1);
			pos = str.find(c,pos+1);
			//cout<<str<<endl;
			//cout<<pos<<endl;
			//++pos;
		}
		cout<<str<<endl;



	}


}