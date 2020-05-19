def lengthOfLongestSubstring(s):
        st=[]
        max=0
        while True:
            if len(s)==0:
                return 0
            for i in range(len(s)):
                st.append(s[i])
                if len(st)==len(set(st)):
                    continue
                else:
                        st.pop(0)
                        max=len(st)
                        if len(s)>2:
                            s=s[i+1:]
                            break
                        else:
                            return max 
print(lengthOfLongestSubstring("pwwkew"))