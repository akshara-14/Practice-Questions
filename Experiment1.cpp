// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int L = 30;
//     char str[] = "An architect may have a graphics program to draw an entire building but be interested in only ground floor";
//     int spaceCount = 0;
//     int count = 0;
//     for (int i = 0; i < strlen(str); i++){
//         count++;
//         if (str[i] == ' '){
//         spaceCount++;
//         }
//         if (spaceCount % 2 == 0 && spaceCount !=0){

//         }
//         cout<<str[i]<<endl;
//     }
// return 0;
// }

#include "bits/stdc++.h"
using namespace std;

string JoinALineWithSpace(
    vector<string> &words,
    int start, int end,
    int num_spaces)
{

    int num_words_curr_line = end - start + 1;

    string line;

    for (int i = start; i < end; i++)
    {

        line += words[i];
        --num_words_curr_line;

        int num_curr_space = ceil((double)(num_spaces) / num_words_curr_line);

        line.append(num_curr_space, ' ');

        num_spaces -= num_curr_space;
    }

    line += words[end];
    line.append(num_spaces, ' ');

    return line;
}

vector<string> JustifyText(
    vector<string> &words,
    int L)
{

    int curr_line_start = 0;
    int num_words_curr_line = 0;
    int curr_line_length = 0;

    vector<string> result;

    for (int i = 0; i < words.size(); i++)
    {

        ++num_words_curr_line;

        int lookahead_line_length = curr_line_length + words[i].size() + (num_words_curr_line - 1);

        if (lookahead_line_length == L)
        {

            string ans = JoinALineWithSpace(
                words,
                curr_line_start,
                i,
                i - curr_line_start);

            result.emplace_back(ans);

            curr_line_start = i + 1;

            num_words_curr_line = 0;
            curr_line_length = 0;
        }

        else if (lookahead_line_length > L)
        {

            string ans = JoinALineWithSpace(
                words,
                curr_line_start,
                i - 1,
                L - curr_line_length);

            result.emplace_back(ans);

            curr_line_start = i;

            num_words_curr_line = 1;

            curr_line_length = words[i].size();
        }

        else
        {
            curr_line_length += words[i].size();
        }
    }

    if (num_words_curr_line > 0)
    {
        string line = JoinALineWithSpace(
            words,
            curr_line_start,
            words.size() - 1,
            num_words_curr_line - 1);

        line.append(
            L - curr_line_length - (num_words_curr_line - 1),
            ' ');

        result.emplace_back(line);
    }

    return result;
}

vector<string> splitWords(string str)
{

    vector<string> words;
    string a = "";
    for (int i = 0; str[i]; i++)
    {

        if (str[i] != ' ')
        {
            a += str[i];
        }

        else
        {
            words.push_back(a);
            a = "";
        }
    }

    words.push_back(a);

    return words;
}

void printJustifiedText(vector<string> &result)
{
    for (auto &it : result)
    {
        cout << it << endl;
    }
}

void justifyTheText(string str, int L)
{

    vector<string> words;

    words = splitWords(str);

    vector<string> result = JustifyText(words, L);

    printJustifiedText(result);
}

int main()
{
    string str = "An architect may have a graphics program to draw an entire building but be interested in only ground floor";
        int L = 30;

    justifyTheText(str, L);

    return 0;
}