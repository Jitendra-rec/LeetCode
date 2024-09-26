class Solution {
public:
    string intToRoman(int num) {
       string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
       int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
       string s="";
       while(num>0)
       {
        int i=0;

        while(val[i]>num && i < 12) i++;
    
       num-=val[i];
       s=s+roman[i];
       //   cout<<s<<" "<<num<<endl;
       }
       return s;
     
    }
};