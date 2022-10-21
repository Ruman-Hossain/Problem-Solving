string Solution::solve(string A) {
    string result ="";
    string word = "";
    for(int i=0;i<A.size();i++){
        if(A[i] != ' '){
            word.push_back(A[i]);
        }else{
            if(word.size()>0)
                result = word + " " + result;
            word="";
        }
    }
    if(word.size()>0)
                result = word + " " + result;
    if(result.back()==' ')
        result.pop_back();
    return result;
}
