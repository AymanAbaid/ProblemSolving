int LongestPalindrome(string str){
 cout<<str<<endl;

int n = str.size();
int ts = 0, te = 0, s = 0, e = n-1, mid = 0;
bool reset = false;
mid = (s + e+1) / 2 ;
ts = s;
te = e-1;

for (int i = 0; i < mid ; i++) {
    if (str[s] != str[e]) {
        ts = -1;
        te = -1;
        reset = true;
    }

    else if (reset && (str[s] == str[e])) {
        ts = s;
        te = e;
        reset = false;
    }
  s++;
  e--;


}

  int l=0;

  if(ts < te){
    for(int i=ts ; i<=te ; i++){
        cout<<str[i];
      l++;
    }
      
    }
  return l;  

}
