//
//  main.cpp
//  heightChecker
//
//  Created by Bryant Sahota on 12/15/19.
//  Copyright © 2019 Bryant Sahota. All rights reserved.
//

/*include <iostream>
#include <vector>

class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        int sol = 0;
        for(int i = 0; i < heights.size()-1; i++)
        {
           if(heights[i] > heights[i+1])
            {
                std::cout << i << std::endl;
                sol++;
                std::cout << "sol: " + std::to_string(sol) << std::endl;
            }
        }
        if(heights[heights.size()] < heights[heights.size()-1])
        {
            sol++;
            std::cout<< "end case sol: " + std::to_string(sol) << std::endl;
        }
        std::cout << "return sol: " + std::to_string(sol) << std::endl;
        return sol;
    }
};
*/

#include <vector>
#include <iostream>

class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        std::vector<int>organizedHeights;
        organizedHeights = heights;
        sort(organizedHeights.begin(), organizedHeights.end());
        int sol = 0;
        for(int i = 0; i < heights.size(); i++)
        {
            if(heights[i] != organizedHeights[i])
            {
                sol++;
            }
        }
        std::cout << sol << std::endl;
        return sol;
    }
};




int main()
{
    std::vector<int>heights = {1, 1, 4, 2, 1, 3};
    Solution s;
    s.heightChecker(heights);
}
