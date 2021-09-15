#include <iostream>
#include<string>

using namespace std;  
int main()  
{  
    string str;  
    cout<<"Enter a string:\n";  
    getline(cin,str);  
    int max = 0;  
    char res;  
    int size = str.length();  
    for(int i = 0; i < size; i++)  
    {  
        int count = 0;  
        for(int j = 0; j < size; j++)  
        {  
            if(str[j] == str[i] && str[j]==str[i+1])  
            {  
                count++;  
            }  
        }  
        if(count >  max)  
        {  
            max = count;  
            res = str[i];  
        }  
    }  
    cout<<"The most frequent character of the string is "<<res;  
}  