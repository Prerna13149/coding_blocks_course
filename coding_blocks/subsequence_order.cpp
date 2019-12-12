#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int compare(char ch[], char ch2[]){
    int n1 = strlen(ch);
    int n2 = strlen(ch2);
    int max;
    if(n1<n2){
        max = n1;
    }
    else{
        max = n2;
    }
    int j=0;
    while(j<max && ch[j]!='\0' && ch2[j]!='\0'){
        if(ch[j]>ch2[j]){
            //cout<<" here";
            return 0;
        }
        else if(ch[j]<ch2[j]){
            return 1;
        }
        else{
            j++;
        }
        
    }
    if(ch[j]!='\0'){
        return 0;
    }
    if(ch2[j]!='\0'){
        return 1;
    }

    return -1;
}
void sort(char ch[1000][1000], int n){
    int i=0;
    int j;
    for (int i = 0; i <n ; i++)
    {
        for(int j=0;j<(n-i-1);j++){
            int x = compare(ch[j], ch[j+1]);
            if(x==0){
                swap(ch[j], ch[j+1]);
            }
        }
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ch[i]<<" ";
        /* code */
    }
}
void subsequences(char ch[1000], char out[1000], int i, int j, char arr[1000][1000], int* k){
    if(ch[i]=='\0'){
        out[j]='\0';
        //cout<<out<<"\n";
        strcpy(arr[*k], out);
        //arr[*k] = out;
        *k = *k+1;
        return;
    }
    out[j]=ch[i];
    //  out[j+1]='\0';
    //  cout<<out<<"\n";
     subsequences(ch, out, i+1, j+1, arr, k);
     subsequences(ch, out, i+1, j, arr, k); 
     
     
     
    return;
}

void printArray(char arr[1000][1000], int k){
    for(int i=0;i<k;i++){
        cout<<arr[i]<<"\n";
    }
    return;
}

int main() {
    char ch[1000];
    
    int n;
    cin>>n;
    cin.get();
    int i=0;
    while(i<n){
        cin>>ch;
        char out[1000];
        char arr[1000][1000];
        //cout<<" "<<"\n";
        //vector<string>
        int k=0;
        subsequences(ch, out, 0, 0, arr, &k);
        sort(arr, k);
        //printArray(arr, k);
        cout<<"\n";
        i++;
    }
    
    return 0;
}