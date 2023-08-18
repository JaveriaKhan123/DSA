#include <iostream>
using namespace std;
int main(){
/* Pattern 3   
    int n;
    cin>> n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
// Pattern 4
     int n;
    cin>> n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    // Pattern 5
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
            }
            cout<<endl;
            i=i+1;
    }

    //  Pattern 6
    int n;
    cin>> n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row <<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
       
    //    Pattern 7
        int n;
        cin>> n;
        int row=1, toprint=1;
        while(row<=n){
            int col=1;
            while(col<=row){
                cout<<toprint<<" ";
                toprint=toprint+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
        
    //   pattern 8
         int n;
         cin>> n;
         int row=1;
         while(row<=n){
            // int col=1;
            int col=row;
            while(col<row*2){
                cout<<col <<" ";
                // value=value+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
         } 

        //  Pattern 9
        int n;
        cin>> n;
        int i=1;
        while(i<=n){
            int j=1;
            while(j<=i){
                cout<<i+j-1 <<" ";
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }
        
    //    pattern 10
        int n;
        cin>> n;
        int row=1;
        while(row<=n){
            int j=1;
            while(j<=n){
                char ch='A'+row-1;
                cout<<ch<<" ";
                j=j+1;
            }
            cout<<endl;
            row=row+1;
        }
        
    //    Pattern 11
    int n;
    cin>> n;
     int row=1;
        while(row<=n){
            int j=1;
            while(j<=n){
                char ch='A'+j-1;
                cout<<ch<<" ";
                j=j+1;
            }
            cout<<endl;
            row=row+1;
        // }
        
      //  Pattern 12
     int n;
     cin>>n;
     int i=1;
     char ch='A';
     while(i<=n){
        int j=1;
         while(j<=n){
             cout<<ch <<" ";
             ch=ch+1;
            j=j+1;
         }
         cout<<endl;
         i=i+1;
     }
    
    // Pattern 13
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        char ch='A'+i-1;
        int j=1;
        while (j<=n){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
         cout<<endl;
        i=i+1;
        }
        
        // Pattern 14
       int n;
       cin>>n;
       int row=1;
       while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row-1;
            cout<<ch <<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
       
    //    Pattern 15
      int n;
      cin>> n;
      int i=1;
      char ch='A';
      while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
      }
      
    //  Pattern 16
     int n;
     cin>> n;
     int i=1;
     while(i<=n){
        char ch='A'+i-1;
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
     } 
     
   // pattern 17
    int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            cout<<start<<" ";
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
//    Pattern 18
int n;
cin>> n;
int i=1;
while(i<=n){
    int space=n-i;
    while(space){
     cout<<" ";
     space=space-1; 
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

// Pattern 19
int n; 
cin>> n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<"*"<<" ";
        
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

// Pattern 20
int n; 
cin>> n;
int i=1;
while(i<=n){
    int j=1, space=1;
     while(space<=i){
     cout<<"  ";
     space=space+1; 
    }
    while(j<=n-i+1){
        cout<<"*"<<" ";
         j=j+1;
    }
    cout<<endl;
    i=i+1;
}

// Pattern 21
int n; 
cin>> n;
int i=1;
while(i<=n){
    int j=1, space=1;
     while(space<=i){
     cout<<"  ";
     space=space+1; 
    }
    while(j<=n-i+1){
        cout<<i<<" ";
         j=j+1;
    }
    cout<<endl;
    i=i+1;
}

// Pattern 22
int n;
cin>>n;
int i=1;

while(i<=n){
    int j=1, space=1;
     while(space<=n-i){
     cout<<"  ";
     space=space+1; 
    }
    while(j<=i){
        cout<<i<<" ";
         j=j+1;
    }
    cout<<endl;
    i=i+1;
}

// Pattern 23
int n;
cin>> n;
int i=1 , num=1;
while(i<=n){
    int j=1 , space=1;
    while(space<=n-i){
        cout<<"  ";
        space=space+1;
    }
    while(j<=i){
        cout<<num<<" ";
        num=num+1;
        j=j+1;
    }
    i=i+1;
    cout<<endl;
}

// Pattern 24
int n;
cin>> n;
int i=1;
while(i<=n){
    int space=n-i;
    while(space){
        cout<<"  ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<j<<" ";
        j=j+1;
    }
    int start=i-1;
    while(start){
        cout<<start<<" ";
        start=start-1;
    }
    cout<<endl;
    i=i+1;
}

// Pattern25
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
        cout<<'*'<<" ";
        j=j+1;
    }
    j=n-i+1;
    while(j>=1){
        cout<<j<<" ";
        j=j-1;
    }

    cout<<endl;
    i=i+1;
   }
 */


        


    }




