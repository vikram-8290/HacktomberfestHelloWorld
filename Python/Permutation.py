def permutations(strings):
    if not strings:
        return []
    if len(strings) == 1:
        return [[strings[0]]]
    perms = []
    for i in range(len(strings)):
        for perm in permutations(strings[:i] + strings[i + 1:]):
            perms.append([strings[i]] + perm)
    return perms
def merge( s1, s2): 
        
    if s1 == s2 or s2 in s1: 
        return s1 
    if s1 in s2: 
        return s2 
    for i in range(len(s1)): 
        if s2.startswith(s1[i:]): 
            return s1[:i] + s2 
    return s1 + s2 
                                                                                                       
