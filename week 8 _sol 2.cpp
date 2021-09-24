#include<iostream>
#include<string>
using namespace std;

main()
{
    string c,s1,s2;
    int i;

    cout << "Input String : ";
    getline(cin , c);

    for(i=0;c[i]!='\0';i++) if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')) s1+=tolower(c[i]);
    for(i=c.length()-1;i>-1;i--) if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')) s2+=tolower(c[i]);

    //cout << s1 << "\n" << s2 << "\n";
    if(s1==s2) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}

