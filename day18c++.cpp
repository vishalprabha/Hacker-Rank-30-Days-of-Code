#include <iostream>

using namespace std;

class Solution {
    char stack[50], queue[50];
    int top, front, end;
   public: Solution()
    {
        top = -1;
        front = end = -1;
    }
    void pushCharacter(char ch){
        if(top == -1)
        {
            top = 0;
            stack[top]=ch;
        }
        else{
            ++top;
            stack[top]= ch;
        }
    }
    char popCharacter(){

            --top;
            return stack[top+1];

    }
    void enqueueCharacter(char ch)
    {
        if(front==-1 && end==-1)
        {
            front = end = 0;
            queue[end]=ch;
        }
        else
        {
            ++end;
            queue[end]=ch;
        }
    }
    char dequeueCharacter(){
        if(front==end)
        {
            front = end = -1;
            return queue[front+1];
        }
        else{
            front++;
            return queue[front-1];
        }
    }

};


int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
