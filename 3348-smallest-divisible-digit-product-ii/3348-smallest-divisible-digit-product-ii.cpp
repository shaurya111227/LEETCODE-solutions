class Solution {
public:
typedef long long ll;
    string freeslotsfiller(ll required , ll length){
        string str;

        for(int digit = 9;digit>=2;digit--){
            while(required % digit == 0){
                str.push_back(digit+'0');
                required/=digit;
            }
        }
            while(str.length()<length){
                str.push_back('1');
            }
            if(required != 1) return "";
        reverse(str.begin(),str.end());
        return str;

    }
    string smallestNumber(string num, long long t) {
        int n = num.length();

        ll temp = t;
        for(int primeFact : {2,3,5,7}){
            while(temp % primeFact == 0){
                temp /= primeFact;
            }
        }
        if(temp != 1){
            return "-1";
        }
        // pre-compute remainingFactor[i] if we take i digits of num in my result , what factor remaining for divisible by t//
        vector<ll> remainingFactor(n+1,t);
        for(int i = 0;i<n;i++){
            ll digit = num[i]-'0';
            if(digit==0){    //1230456
                break;
            }
            remainingFactor[i+1] = remainingFactor[i]/gcd(remainingFactor[i],digit);
        }
        if( remainingFactor[n] == 1){  // the input itself is sufficient for t
            return num;
        }

        int zeropos = num.find('0');
        int zeroidx = n-1;
        if(zeropos != -1){
            zeroidx = zeropos;
        }

        for(int i = zeroidx;i>=0;i--){
            ll required = remainingFactor[i];
            ll freeslots = n-i-1;
            for(int digit = num[i]-'0' + 1;digit<=9;digit++){
                ll furtherrequired = required/gcd(required,digit);
                string requirednumber = freeslotsfiller(furtherrequired,freeslots);

                if(requirednumber.length()==freeslots){
                    return num.substr(0,i) + char(digit+'0') + requirednumber;
                }
            }
        }
        string ans = freeslotsfiller(t, n + 1);

        if(ans.empty())return "-1";

        return ans;
    }
};