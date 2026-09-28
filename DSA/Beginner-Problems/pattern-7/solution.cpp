class Solution {
public:
    void pattern7(int n) {
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<2*i;k++){
        cout<<"*";
    }
  
    cout<<endl;
} 
    }
};