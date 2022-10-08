class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        # Initialization Left and Right as representation of starting points  
        l,r = 0, len(cardPoints) - k
        # Initializing total as sum from sum of cardpoints from right to points
        total =  sum(cardPoints[r:])
        # Max Score 
        maxScore = total
        
        while r < len(cardPoints):
            # Overwriting total as the process progress
            total += (cardPoints[l] - cardPoints[r])
            # To compare overwritten total with the maxScore
            maxScore = max (maxScore,total)
            # Incrementing left and right until it stops
            l += 1
            r += 1
        
       # Returning conditions
        return maxScore
