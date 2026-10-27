class Solution {
public:
    bool judgeCircle(string moves) {
        int noL=0,noU=0,noD=0,noR=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') noU++;
            else if(moves[i]=='D') noD++;
            else if(moves[i]=='L') noL++;
            else noR++;
        }
        if(noU==noD && noR==noL){
            return true;
        }
        return false;
    }
};