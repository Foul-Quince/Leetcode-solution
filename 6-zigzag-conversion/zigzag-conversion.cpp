class Solution {
public:
    string convert(string s, int numRows) {

if (numRows==1 || numRows>=s.length())
        return s;

        vector <string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

       
        for (int i=0; i<s.length(); i++) {
            char c=s[i];
            rows[currentRow]+= c;
        
            if (currentRow==0 || currentRow == numRows-1)
            goingDown=!goingDown;

                if(goingDown)
                    currentRow++;
                else
                    currentRow--;}
        
        string result = "";
        for (int i=0; i<numRows; i++){
            result = result + rows[i];
        }
                    
        return result;
    }
};