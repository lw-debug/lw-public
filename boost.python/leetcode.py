def maxArea(height):
        i=0
        j=len(height)-1
        res=0
        if j<1:
            return -1
        while i<j:
            h=min(height[i],height[j])
            res=max(res,h*(j-i))
            if height[i]<height[j]:
                i+=1
            if height[j]<=height[i]:
                j-=1
        return res
height=[1,8,6,2,5,4,8,3,7]
res=maxArea(height)
print(res)