class Solution {
public:
    string predictPartyVictory(string senate) {
        queue <int> radiant;
        queue <int> dire;
        for(int i = 0; i < senate.length(); i++) {
            if(senate[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }
        while(!radiant.empty() && !dire.empty()) {
            if(radiant.front() > dire.front()) {
                radiant.pop();
                int dire_front = dire.front();
                dire.pop();
                dire.push(dire_front + senate.length());
            }
            else {
                dire.pop();
                int radiant_front = radiant.front();
                radiant.pop();
                radiant.push(radiant_front + senate.length());
            }
        }
        if(radiant.empty())
            return "Dire";
        else
            return "Radiant";
    }
};