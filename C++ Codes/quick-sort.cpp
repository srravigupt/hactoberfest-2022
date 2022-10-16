#include<bits/stdc++.h>
using namespace std;

class QuickSort{
    public:
    void quicksort(vector<int> &v, int s, int e){
        if(s < e){
            int m = partition(v, s, e);
            quicksort(v, s, m-1);
            quicksort(v, m+1, e);
        }
    }

    int partition(vector<int> &v, int s, int e){
       int pivot = v[s];
       int k = s-1;
       for(int i = s; i <= e; i++){
            if(v[i] <= pivot){
                k++;
                swap(v[k], v[i]);
            }   
       }
       swap(v[k], v[s]);
       return k;
    }

    void print(vector<int> &v){
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
};

void print(vector<int> v){
  for(auto x: v){
    cout<<x<<" ";
  }
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int  n; cin>>n;
    vector<int> v;
    for(int i=0; i< n; i++){
        int num; cin>>num;
        v.push_back(num);
    }
    
    QuickSort qs;
    qs.quicksort(v, 0, n-1);

    print(v);
}
return 0;
}
