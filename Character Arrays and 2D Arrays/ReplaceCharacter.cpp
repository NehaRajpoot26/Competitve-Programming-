// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd
void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int i;
    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]==c1)
            input[i]=c2;
    }
    
}
