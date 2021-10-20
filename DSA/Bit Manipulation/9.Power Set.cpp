void filterchars(int n,string s,vector<string> &v){
		    int j=0;
		    string temp="";
		    while(n>0){
		        int last_bit=(n&1);
		        if(last_bit){
		            temp+=s[j];
		        }
		        j++;
		        n=n>>1;
		    }
		    if(temp.length())
		    v.push_back(temp);
		}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n=s.size();
		    vector<string> v;
		    for(int i=0;i<(1<<n);i++){
		        filterchars(i,s,v);
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
