#include <iostream>
#include <vector>

using namespace std;

void print(vector<string> names){
    for(int i = 0; i<names.size();i++)
        cout<<names[i]<<endl;
    printf("\n");
};

bool myComp(string a, string b){
    return a < b;
}
vector<string> alphaSort(vector<string> a){
    int n = a.size();
    sort(a.begin(),a.end(), myComp);
    return a;
}
int main() {
    //lorcan sinead faidh rory joy micheal siobha james
    int n;
    vector<string> names;
    string name;
    printf("Enter number of names\n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        cin >> name;
        names.push_back(name);

    }
    printf("\nnames before sorting\n\n");
    print(names);
    /*********************/
    cout<<"names after sort"<<endl<<endl;//printf("\nnames after sorting\n\n");
    names = alphaSort(names);
    print(names);
    return 0;
}
