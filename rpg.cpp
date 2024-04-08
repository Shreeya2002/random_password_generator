#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
static const char alpha_num[]="123456789" 
"!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
int str_len = sizeof(alpha_num)-1;
char Gen_Rand()
{
    return alpha_num[rand()%str_len];
}

int main(){
    int n,c=0,s=0;
    srand(time(0));
    cout<<"Enter the length of your password: ";
    cin>>n;
    cout<<n<<endl;
    cout<<"Your password is: ";
    N:
    char C;
    string D;
    for(int z=0;z<n;z++){
        C = Gen_Rand();
        D+=C;
        if(isdigit(C)){
            c++;
        }
        if(C == '!'|| C == '@' || C == '#' || C == '$' || C == '%' || C == '^' || C == '&' || C == '*')
        {
            s++;
        }
    }
if(n>2 && (s == 0 || c==0)){
            goto N;
        }
        cout<<D;
        cout<<endl<<endl<<"Thank you for using password-generator";
        return 0;
}


