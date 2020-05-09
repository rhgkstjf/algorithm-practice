#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    std::sort(participant.begin(), participant.end());
    std::sort(completion.begin(), completion.end());
    for(int i=0;i<completion.size();i++)
    {
        if(participant[i] != completion[i])
            return participant[i];
    }
    answer = participant[participant.size()-1];
    return answer;
}
