#include<iostream>
#include<cstring>
using namespace std ;

int main () {
    string str = "yash khilavdiya" ;
    str = "naman" ;
    int a = 12 ;
    cout<<sizeof(a);
    char char_arr[] = "yash khilavdiya";
    cout<<str<<"\n" ;
    printf("%s", char_arr) ;
    cout<<str.length()<<endl;
    int str_size = str.length() ;

    for(int i = 0; i<str_size/2; i++){
        if(str[i] == str[str_size - i - 1]){
            continue ;
            cout<<"String is palindrome";
        }
        else{
            cout<<"String is not palindrome";
            break ;
        }
    }

    return 0 ;
}