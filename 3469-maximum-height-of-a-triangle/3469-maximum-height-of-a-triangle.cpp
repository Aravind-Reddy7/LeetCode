class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        
        int h1 = 0, h2 = 0;
        int r = red, b = blue;

        int count = 1;
        while(r != 0 || b != 0) {
            
            if(r >= count) {
                r = r - count;
                h1++, count++;
            }
            else 
                break;

            if(b >= count) {
                b = b - count;
                h1++, count++;
            }
            else 
                break;

        }

        count = 1;
        while(red != 0 || blue != 0) {
            
            if(blue >= count) {
                blue = blue - count;
                h2++, count++;
            }
            else 
                break;

            if(red >= count) {
                red = red - count;
                h2++, count++;
            }
            else 
                break;

        }

        return (h1 > h2) ? h1 : h2;

    }
};