class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int>count(10,0);
        int bulls = 0, cows = 0, n = secret.size();
        for(int i=0;i<n;i++) 
        {
            if(secret[i] == guess[i]) bulls++;
            else 
            {
                cows = count[secret[i] - '0']<0?cows+1:cows;
                count[secret[i] - '0']++;
                cows = count[guess[i] - '0']>0?cows+1:cows;
                count[guess[i]-'0']--;
            }
        }
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};
