#include <iostream>
using namespace std;
int main(){
    /*
    // Pattern 1 
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"* ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    // Pattern 2
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i ;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
         }
    

    // Pattern 3 
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" " ;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
//    Pattern 4
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1 <<" " ;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
//    Pattern 5
int n;
    cin>> n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count <<" " ;
            count=count+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
//    Pattern 6
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
//    Pattern 7
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
//    Pattern 8
    int n;
    cin>> n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while (j<=i){
        cout<<count <<" ";
        count=count+1;
        j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
//     Pattern 9


    int n;
 
    cout<<"Enter value of n : "; 
    cin>> n;
    int i=1;
    int num=1;
    while(i<=n){
        int j=1;
        num=i;
        while(j<=i){
            cout<<num <<" ";
            num=num+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
//    Pattern 10
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<i-j+1<<" ";
        j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    
//    Pattern 11
        int n;
        cin>> n;
        int i=1;
        while(i<=n){
            int j=1;
            while(j<=n-i+1){
                cout<<j<<" ";
                j=j+1;
            }
            j=1;
            while(j<=(i-1)*2){
                cout<< "* ";
                j=j+1;
            }
            j=n-i+1;
            while(j>=1){
                cout<<j<<" ";
                j=j-1;
            }
            i=i+1;
            cout<<endl;

        }

        int n;
        cin>> n;
        int i=1;
        while(i<=n){
            int j=1;
            while(j<=n-i+1){
                cout<<j<<" ";
                j=j+1;
            }
            j=1;
            while(j<=(i-1)*2){
                cout<<"* ";
                j=j+1;
            }
            j=n-i+1;
            while(j>=1){
                cout<<j<<" ";
                j--;
            }
            cout<<endl;
            i++;
        }
        
    //    Pattern 12
    int  n;
    cout<<"Enter value of n : "; 
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        int space=1;
        while(space<=n-i){
            cout<<"  ";
            space=space+1;
        }
        while(j<=i){
            cout<<j<<" ";
            j=j+1;
        }
        j=i-1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;

    }

    int  n;
    cout<<"Enter value of n : "; 
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        int space=1;
        while(space<=n-i){
            cout<<"  ";
            space++;
        }
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }

    //  Pattern
    int n; 
    cout<<"Enter input : ";
    cin>> n;
    int i=1, num=1;
    while(i<=n){
        int j=1, space=1;
        while(space<=(n-i)*2){
             cout<<"  ";
             space=space+1;
        }
        while(j<=i){
            if(num<10){
                cout<<" "<<num<<"  ";
            }else{
                cout<<num<<"  ";
            }
            
            num=num+1;
            j=j+1;
        }
        i++;
        cout<<endl;
    }

    int n;
    cout<<"Enter the value of n : ";
    cin>> n;
    int i = 1;
    while(i<=n){
        cout<<"*";
        if(i==1 || i==n/2){
        int j = ((n/2)-1);
        while(j!=0){
         cout<<" * ";
         j--;
        }
         }
        i++;
       cout<<endl;
       }

*/
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        cout<<"*";
        if(i==1 || i==n/2){
            int j=(n/2);
            while(j!=0){
            cout<<" * ";
             j--;
            }
           
        }
        i++;
        cout<<endl;
    }
    

        

            
    
           
            

        
       










































































































































































































   
   
   
   
   
   
   
   }

























































































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    