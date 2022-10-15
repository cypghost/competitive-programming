class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boat = 0;
        int l = 0, r = people.size() - 1;
        while(l <= r)
        {
            if(people[l] + people[r] <= limit)
            {
                l++;
                r--;
            }
            else
            {
                r--;
            }
            boat++;
        }
       /*
       while(l < r)
        {
            int sum = people[l] + people[r];
            if(sum == limit)
            {
                boat++;
                r -= 1;
            }
            else if(sum >= limit)
            {
               boat++; 
               l += 1;
            }
            if( limit == people[r] || limit == people[l])
            {
                boat++; 
            } 
        }
        */
        return boat;
    }
};
