vector<int> alternateNumbers(vector<int>&arr) {
    // Write your code here.
    int n=arr.size();
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

   
        if(pos.size()>neg.size()){
             for(int i=0;i<neg.size();i++){
                 arr[i*2]=pos[i];
                 arr[i*2+1]=neg[i];
             }
             int idx=neg.size()*2;
             for(int i=neg.size();i<pos.size();i++){
                 arr[idx]=pos[i];
             }
        
    }
    else{
        for(int i=0;i<pos.size();i++){
                 arr[i*2]=pos[i];
                 arr[i*2+1]=neg[i];
             }
             int idx=pos.size()*2;
             for(int i=pos.size();i<neg.size();i++){
                 arr[idx]=neg[i];
             }
    }

    return arr;
}